#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int g;
        cin >> g;
        while (g--)
        {
            int n, i, q;
            cin >> i >> n >> q;

            if (n & 1)
            {
                if (i == q)
                {
                    cout << n / 2 << endl;
                }
                else
                {
                    cout << n / 2 + 1 << endl;
                }
            }
            else
            {
                cout << n / 2 << endl;
            }
            
        }
    }
}