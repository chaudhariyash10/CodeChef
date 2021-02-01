#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<int, bool> umap;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        umap[arr[i]] = true;
    }

    sort(arr, arr + n);

    int curAns = 0, maxAns = 0;

    for (int i = 0; i < n; i++)
    {
        
    }

    cout << maxAns;
}