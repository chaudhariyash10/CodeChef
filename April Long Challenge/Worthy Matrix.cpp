#include <iostream>
using namespace std;

// long long query(long long pre[][1000002], int starti, int startj, int endi, int endj)
// {
//     starti++;
//     endi++;
//     startj++;
//     endj++;

//     return pre[endi][endj] - pre[starti - 1][endj] - pre[endi][startj - 1] + pre[starti - 1][startj - 1];
// }

int main()
{
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
                // cout << matrix[i][j] << " ";
            }
            // cout << endl;
        }

        for (int i = 0; i < n + 1; i++)
            pre[0][i] = 0, pre[i][0] = 0;

        for (int i = m - n - 1; i < m; i++)
            pre[0][i] = 0;

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {
        //         cout << matrix[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < m + 1; j++)
            {
                pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + matrix[i - 1][j - 1];
            }
        }

        // for (int i = 0; i < n + 1; i++)
        // {
        //     for (int j = 0; j < m + 1; j++)
        //     {
        //         cout << pre[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        int count = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < n - i; j++)
            {
                for (int l = 0; l < m - i; l++)
                {
                    int starti = j + 1;
                    int endi = l + 1;
                    int startj = j + i;
                    int endj = l + i;

                    long long avg = (pre[endi][endj] - pre[starti - 1][endj] - pre[endi][startj - 1] + pre[starti - 1][startj - 1]) / i;
                    if (avg >= k)
                        count++;
                    cout << i << " " << j << " " << l << " " << avg << " " << count << endl;
                }
            }
        }
        cout << count << endl;
    }
}
