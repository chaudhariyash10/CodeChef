#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr1[n], arr2[m];
        int jackLose = 0, johnWin = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            johnWin += arr1[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
            jackLose += arr2[i];
        }

        if (johnWin > jackLose)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            sort(arr1, arr1 + n);
            sort(arr2, arr2 + m);
            int i = 0, j = m - 1, count = 0;
            while (johnWin <= jackLose && i < n && j >= 0)
            {
                johnWin += arr2[j];
                johnWin -= arr1[i];

                jackLose += arr1[i];
                jackLose -= arr2[j];
                i++;
                j--;
                count++;
            }
            if (johnWin > jackLose)
                cout << count << endl;
            else
            {
                cout << -1 << endl;
            }
        }
    }
}