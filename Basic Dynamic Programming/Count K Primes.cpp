#include <bits/stdc++.h>

using namespace std;

int prime[100001];
int dp[6][100001];

int main()
{
    for (int i = 2; i < 100001; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i; j < 100001; j = j + i)
            {
                prime[j]++;
            }
        }
    }
    for (int i = 1; i < 100001; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            dp[j][i] = dp[j][i - 1];
        }

        int v = prime[i];

        if(v >= 1 && v <= 5)
            dp[v][i]++;
    }

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;

        cout << dp[k][b] - dp[k][a - 1] << endl;
    }
}