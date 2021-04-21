#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        unordered_map<int, int> umap;
        int temp;
        int distinct = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;

            if (umap[temp])
                umap[temp]++;
            else
            {
                umap[temp] = 1;
                distinct++;
            }
        }
        cout << min(distinct, n - x) << endl;
    }
}