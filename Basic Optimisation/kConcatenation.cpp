#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        long long arr[n];

        long long wholeSum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            wholeSum += arr[i];
        }

        long long curSum = arr[0], maxi = arr[0], curSumFor = arr[0], curSumRev = arr[n - 1], maxFrom1 = arr[0], maxEndingAtLast = arr[n - 1];

                for (int i = 1; i < n; i++)
        {
            curSumFor += arr[i];

            if (curSumFor > maxFrom1)
            {
                maxFrom1 = curSumFor;
            }

            curSumRev += arr[n - 1 - i];

            if (curSumRev > maxEndingAtLast)
            {
                maxEndingAtLast = curSumRev;
            }

            maxi = max(arr[i], maxi + arr[i]);
            curSum = max(curSum, maxi);
        }

        long long ans = max(curSum, wholeSum * k);

        if (k >= 2)
        {
            ans = max(ans, maxFrom1 + maxEndingAtLast);
            ans = max(ans, wholeSum * (k - 2) + maxFrom1 + maxEndingAtLast);
        }
        cout << ans << endl;
    }
}