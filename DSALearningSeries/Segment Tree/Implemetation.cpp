#include <bits/stdc++.h>
using namespace std;

//Function to create segment tree

void buildSegmentTree(vector<int> &arr, vector<int> &result, int l, int r, int index)
{
    if (l == r)
        result[index] = arr[l];
    else
    {
        int mid = l + (r - l) / 2;

        buildSegmentTree(arr, result, l, mid, 2 * index + 1);
        buildSegmentTree(arr, result, mid + 1, r, 2 * index + 2);
        result[index] = result[2 * index + 1] + result[2 * index + 2];
    }
}

int query(vector<int> segTree, int index, int queryLeft, int queryRight, int start, int end)
{
    if (queryLeft <= start && queryRight >= end)
    {
        return segTree[index];
    }
    else if (queryLeft > end || queryRight < start)
    {
        return 0;
    }

    int mid = (start + end) / 2;

    int leftAns = query(segTree, 2 * index + 1, queryLeft, queryRight, start, mid);
    int rightAns = query(segTree, 2 * index + 2, queryLeft, queryRight, mid + 1, end);

    return leftAns + rightAns;
}

void update(vector<int> &segTree, int index, int val, int start, int end, int stIndex)
{
    if (index < start || index > end)
    {
        return;
    }

    else if (start == end)
    {
        segTree[stIndex] = val;
        return;
    }
    else
    {
        int mid = (start + end) / 2;

        if (index > mid)
        {
            update(segTree, index, val, mid + 1, end, 2 * stIndex + 2);
        }
        else
            update(segTree, index, val, start, mid, 2 * stIndex + 1);

        segTree[stIndex] = segTree[2 * stIndex + 1] + segTree[2 * stIndex + 2];
    }
}

int main()
{
    vector<int> arr{1, 3, 5};

    vector<int> segTree(4 * arr.size());
    int length = arr.size();
    buildSegmentTree(arr, segTree, 0, arr.size() - 1, 0);

    update(segTree, 0, 4, 0, length - 1, 0);
    cout << query(segTree, 0, 0, 2, 0, length - 1) << endl;

    for (int i = 0; i < 4 * length; i++)
        cout << segTree[i] << " ";
}