#include <iostream>
using namespace std;

long long query(long long **pre, long long i, long long j, long long l)
{
    long long starti = j + 1;
    long long startj = l + 1;
    long long endi = j + i;
    long long endj = l + i;

    return ((pre[endi][endj] - pre[starti - 1][endj] - pre[endi][startj - 1] + pre[starti - 1][startj - 1]) / (i * i));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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
        long long n, m;
        long long k;
        cin >> n >> m;
        cin >> k;

        long long matrix[n][m];
        long long **pre;

        pre = new long long *[n + 1];

        for (long long i = 0; i < n + 1; i++)
            pre[i] = new long long[m + 1];

        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
            }
        }

        for (long long i = 0; i < n + 1; i++)
            pre[0][i] = 0, pre[i][0] = 0;

        for (long long i = m - n - 1; i < m; i++)
            pre[0][i] = 0;

        for (long long i = 1; i < n + 1; i++)
        {
            for (long long j = 1; j < m + 1; j++)
            {
                pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + matrix[i - 1][j - 1];
            }
        }

        long long count = 0;
        for (long long i = 1; i <= n; i++)
        {
            for (long long j = 0; j <= n - i; j++)
            {
                long long startIndex = 0, endIndex = m - i;
                long long mid = startIndex + (endIndex - startIndex) / 2;
                long long avg;
                while (startIndex < endIndex)
                {
                    mid = startIndex + (endIndex - startIndex) / 2;
                    avg = query(pre, i, j, mid);
                    if (k > avg)
                    {
                        startIndex = mid + 1;
                    }
                    else
                    {
                        endIndex = mid;
                    }
                }
                if ((query(pre, i, j, startIndex)) >= k)
                {
                    count += m - i - startIndex + 1;
                }
            }
        }
        cout << count << endl;
    }
}
