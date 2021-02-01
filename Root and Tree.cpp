#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n == 2)
        {
            cout << 0 << endl;
            continue;
        }
        int count;
        int uv = 0, vu = 0;

        for (int i = 0; i < n; i++)
        {
            int t1, t2;
            cin >> t1 >> t2;
            if (t1 == 1)
                uv++;
            else
                vu++;
        }
        cout <<0<< endl;
    }
}