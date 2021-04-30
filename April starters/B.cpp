#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int x, y;
        cin >> x >> y;
        char temp;
        for (int i = 0; i < n; i++)
        {
            int f = 0, p = 0;
            for (int j = 0; j < m; j++)
            {
                cin >> temp;
                if (temp == 'F')
                    f++;
                else if (temp == 'P')
                    p++;
            }

            if (f >= x)
                cout << 1;
            else if (f == (x - 1) && p >= y)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }
}