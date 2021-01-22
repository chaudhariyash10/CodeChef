#include <bits/stdc++.h>

using namespace std;
#define mod 1000000009
#define max 1000001

long long dp[max];

int main()
{
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    for (int i = 4; i < max; i++)
    {
        dp[i] = (dp[i - 2] % mod+ dp[i - 3] % mod) % mod;
    }
    cout << endl;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        cout << dp[n] << endl;
    }
}
