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

        long long ans = 0;
        int powerOf5 = 1;
        while (a / c > 0)
        {
            powerOf5 *= 5;

            ans += n / powerOf5;
        }

        cout << ans << endl;
    }
}