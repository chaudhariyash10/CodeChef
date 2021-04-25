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

int main()
{
    int n = 3;
    int arr[] = {1, 3, 5};

    int segTree[n * 4 + 1];
    int lazy[n * 4 + 1];

    for (int i = 0; i < n * 4 + 1; i++)
    {
        segTree[i] = lazy[i] = 0;
    }
    // buildSegtree()
}