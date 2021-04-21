#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output1.txt", "w", stdout);

#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        long long k;
        cin >> n >> m;
        cin >> k;

        long long matrix[n][m];
        long long pre[n + 1][m + 1];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
            }
        }

        for (int i = 0; i < n + 1; i++)
            pre[0][i] = 0, pre[i][0] = 0;

        for (int i = m - n - 1; i < m; i++)
            pre[0][i] = 0;

        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < m + 1; j++)
            {
                pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + matrix[i - 1][j - 1];
            }
        }

        int count = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j <= n - i; j++)
            {
                for (int l = 0; l <= m - i; l++)
                {
                    int starti = j + 1;
                    int startj = l + 1;
                    int endi = j + i;
                    int endj = l + i;

                    long long avg = ((pre[endi][endj] - pre[starti - 1][endj] - pre[endi][startj - 1] + pre[starti - 1][startj - 1]) / (i * i));

                    if (avg >= k)
                    {
                        count += m - i - l + 1;
                        break;
                    }
                }
            }
        }
        cout << count << endl;
    }
}