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
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int curSame = 1, greatSame = 0;

        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i - 1])
            {
                curSame++;
                if (curSame > greatSame)
                    greatSame = curSame;
            }
            else
            {
                curSame = 1;
                if (curSame > greatSame)
                    greatSame = curSame;
            }
        }

        cout << n - greatSame << endl;
    }
}