#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int temp;
        long long ands;
        cin >> ands;
        for (int i = 1; i < n; i++)
        {
            cin >> temp;
            ands = ands | temp;
        }
        cout << ands << endl;
        while (q--)
        {
            int f, g;
            cin >> f >> g;

            ands = ands ^ f;
            // ands = ands | f;
            ands = ands | g;
            cout << ands << endl;
        }

        // buildSegmentTree(start, segTree, 0, arr.size() - 1, 0);
    }
}