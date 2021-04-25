#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long k, d0, d1;
        cin >> k >> d0 >> d1;

        if ((d0 + d1) % 3 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}