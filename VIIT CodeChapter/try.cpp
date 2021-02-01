#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;

        unordered_map<long, bool> umap;
        long temp;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (umap[k - temp] == true)
                flag = true;
            else
                umap[temp] = true;
        }

        cout << (flag ? "Yes" : "No") << endl;
        ;
    }
}