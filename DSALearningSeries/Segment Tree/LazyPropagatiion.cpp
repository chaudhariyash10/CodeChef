#include <bits/stdc++.h>

using namespace std;

void buildSegTree(int arr[], int segTree[], int l, int r, int idx)
{
    if (l == r)
        segTree[idx] = arr[l];
    else
    {
        int mid = l + (r - l) / 2;

        buildSegTree(arr, segTree, l, mid, 2 * idx + 1);
        buildSegTree(arr, segTree, mid + 1, r, 2 * idx + 2);

        segTree[idx] = segTree[2 * idx + 1] + segTree[2 * idx + 2];
    }
}

int query(int segTree[], int lazy[], int l, int r, int qs, int qe, int idx)
{
    if (lazy[idx] != 0)
    {
        // cout << "problem caused lazy" << endl;
        int dx = lazy[idx];
        lazy[idx] = 0;

        segTree[idx] += dx * (r - l + 1);

        if (l != r)
        {
            lazy[2 * idx + 1] += dx, lazy[2 * idx + 2] += dx;
        }
    }
    if (qs > r || qe < l)
    {
        // cout << "problem caused 1" << endl;
        return 0;
    }

    else if (qs <= l && qe >= r)
    {
        // cout << "problem caused 2" << endl;
        return segTree[idx];
    }

    else
    {
        int mid = l + (r - l) / 2;

        // cout << "problem caused 3"
        //      << " " << mid << endl;
        int leftAns = query(segTree, lazy, l, mid, qs, qe, 2 * idx + 1);
        int rightAns = query(segTree, lazy, mid + 1, r, qs, qe, 2 * idx + 2);

        return leftAns + rightAns;
    }
}

void update(int segTree[], int lazy[], int l, int r, int qs, int qe, int val, int idx)
{
    if (lazy[idx] != 0)
    {
        int dx = lazy[idx];
        lazy[idx] = 0;
        segTree[idx] += dx * (r - l + 1);

        if (l != r)
        {
            lazy[2 * idx + 1] += dx, lazy[2 * idx + 2] += dx;
            // cout << "Lazy tree upadted in update lazy" << endl;
        }
    }

    if (l > qe || r < qs)
    {
        return;
    }

    else if (qs <= l && r <= qe)
    {
        int dx = val * (r - l + 1);
        // lazy[idx] = 0;
        segTree[idx] += dx;

        if (r != l)
        {
            lazy[2 * idx + 1] += val, lazy[2 * idx + 2] += val;
            // cout << "Lazy tree upadted in update else" << endl;
        }

        return;
    }

    else
    {
        int mid = l + (r - l) / 2;

        update(segTree, lazy, l, mid, qs, qe, val, 2 * idx + 1);
        update(segTree, lazy, mid + 1, r, qs, qe, val, 2 * idx + 2);

        segTree[idx] = segTree[2 * idx + 1] + segTree[2 * idx + 2];
    }
}

int main()
{
    cout << "Hii";

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int n = 4;
    int arr[] = {1, 0, 0, 0};

    int segTree[n * 4 + 1];
    int lazy[n * 4 + 1];

    for (int i = 0; i < n * 4 + 1; i++)
    {
        segTree[i] = 0;
        lazy[i] = 0;
    }
    buildSegTree(arr, segTree, 0, n - 1, 0);

    // cout << "Queried" << endl;
    cout << query(segTree, lazy, 0, 3, 0, 3, 0) << endl;

    update(segTree, lazy, 0, 3, 0, 3, 10, 0);

    cout << query(segTree, lazy, 0, 3, 1, 3, 0) << endl;

    update(segTree, lazy, 0, 3, 2, 3, 100, 0);

    cout << query(segTree, lazy, 0, 3, 0, 9, 0) << endl;
    cout << query(segTree, lazy, 0, 3, 5, 9, 0) << endl;

    // for (int i = 0; i < 4 * n + 1; i++)
    //     cout << segTree[i] << " ";
    // cout << endl;
    // for (int i = 0; i < 4 * n + 1; i++)
    //     cout << lazy[i] << " ";
    // cout << endl;
}