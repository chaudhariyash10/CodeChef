#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;

        int tot = 0;

        // int s = 0;
        char ch;
        int flag = false;

        for (int i = 0; i < l; i++)
        {
            cin >> ch;

            if (ch == '1')
                tot++;
            if (i == 0)
            {
                if (tot == 1)
                    flag = true;
            }
            else if (ceil((i + 1) / 2) <= tot)
            {
                // cout << i << " " << tot << " " << ch << endl;
                flag = true;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}