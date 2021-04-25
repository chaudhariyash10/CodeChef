#include <bits/stdc++.h>

using namespace std;

void buildSegTree(int arr[], int segTree[], int l, int r, int idx)
{
    if (l == r)
        segTree[idx] = (arr[l] % 2 == 0) ? 1 : 0;
    else
    {
        int mid = l + (r - l) / 2;

        buildSegTree(arr, segTree, l, mid, 2 * idx + 1);
        buildSegTree(arr, segTree, mid + 1, r, 2 * idx + 2);

        segTree[idx] = segTree[2 * idx + 1] + segTree[2 * idx + 2];
    }
}

int query(int segTree[], int ql, int qr, int l, int r, int idx)
{
    if (ql <= l && r <= qr)
    {
        return segTree[idx];
    }
    else if (qr < l || r < ql)
        return 0;
    else
    {
        int mid = l + (r - l) / 2;

        int leftAns = query(segTree, ql, qr, l, mid, 2 * idx + 1);
        int rightAns = query(segTree, ql, qr, mid + 1, r, 2 * idx + 2);

        return leftAns + rightAns;
    }
}

void update(int segTree[], int pos, int val, int l, int r, int idx)
{
    if (pos < l || pos > r)
        return;
    else if (l == r)
    {
        segTree[idx] = (val % 2 == 0) ? 1 : 0;
        return;
    }

    else
    {
        int mid = l + (r - l) / 2;
        update(segTree, pos, val, l, mid, 2 * idx + 1);
        update(segTree, pos, val, mid + 1, r, 2 * idx + 2);

        segTree[idx] = segTree[2 * idx + 1] + segTree[2 * idx + 2];
    }
}

int main()
{
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int segTree[n * 4 + 1];

    for (int i = 0; i < n * 4; i++)
        segTree[i] = 0;
    buildSegTree(arr, segTree, 0, n - 1, 0);

    // for (int i = 0; i < n * 4; i++)
    //     cout << segTree[i] << " ";
    // cout << endl;
    // update(segTree, 4, 4, 0, 5, 0);

    // for (int i = 0; i < n * 4; i++)
    //     cout << segTree[i] << " ";
    // cout << endl;
    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            int pos, val;
            cin >> pos >> val;

            update(segTree, pos - 1, val, 0, n - 1, 0);
        }
        else
        {
            int l, r;
            cin >> l >> r;

            int ans = query(segTree, l - 1, r - 1, 0, n - 1, 0);

            if (x == 1)
            {
                cout << ans << endl;
            }
            else
            {
                cout << r - l + 1 - ans << endl;
            }
        }
    }
}
