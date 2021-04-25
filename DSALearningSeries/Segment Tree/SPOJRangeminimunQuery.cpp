#include <bits/stdc++.h>

using namespace std;

void buildSegTree(int arr[], int segTree[], int start, int end, int segTreeIdx)
{
    if (start == end)
    {
        segTree[segTreeIdx] = arr[start];
    }
    else
    {
        int mid = start + (end - start) / 2;

        buildSegTree(arr, segTree, start, mid, 2 * segTreeIdx + 1);
        buildSegTree(arr, segTree, mid + 1, end, 2 * segTreeIdx + 2);

        segTree[segTreeIdx] = min(segTree[2 * segTreeIdx + 1], segTree[2 * segTreeIdx + 2]);
    }
}

int query(int segTree[], int queryLeft, int queryRight, int start, int end, int segTreeIdx)
{
    if (queryLeft <= start && queryRight >= end)
    {
        return segTree[segTreeIdx];
    }
    else if (queryLeft > end || queryRight < start)
    {
        return INT_MAX;
    }

    else
    {
        int mid = start + (end - start) / 2;

        int leftAns = query(segTree, queryLeft, queryRight, start, mid, 2 * segTreeIdx + 1);
        int rightAns = query(segTree, queryLeft, queryRight, mid + 1, end, 2 * segTreeIdx + 2);

        return min(leftAns, rightAns);
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
        segTree[i] = INT_MAX;

    buildSegTree(arr, segTree, 0, n - 1, 0);

    // for (int i = 0; i < n * 4; i++)
    //     cout << segTree[i] << " ";

    // cout << endl;
    int q;
    cin >> q;
    while (q--)
    {
        int left, right;
        cin >> left >> right;
        cout << query(segTree, left, right, 0, n - 1, 0) << endl;
    }
}
