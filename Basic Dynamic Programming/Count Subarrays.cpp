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
        unsigned long int ans = 0;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n <= 1)
            cout << n << endl;
        else
        {
            int dp[n];
            dp[0] = 1;

            if (arr[1] >= arr[0])
                dp[1] = 2;
            else
                dp[1] = 1;

            for (int i = 2; i < n; i++)
            {
                if (arr[i] >= arr[i - 1])
                    dp[i] = dp[i - 1] + 1;
                else
                    dp[i] = 1;
            }
            for (int i = 0; i < n; i++)
                ans += dp[i];
            cout << ans << endl;
        }
    }
}

