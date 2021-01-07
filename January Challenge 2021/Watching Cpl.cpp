#include <bits/stdc++.h>
using namespace std;

vector<int> includeElement(int a[], int n, int sum)
{
    vector<int> sumSubarray;
    for (int i = 0; i < n; i++)
    {

        // Check if the current element
        // will be incuded or not
        if ((sum - a[i]) >= 0)
        {
            sum = sum - a[i];
            sumSubarray.push_back(a[i]);
        }
    }
    return sumSubarray;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        if (sum < 2 * k || n < 2)
            cout << -1 << endl;

        else if (sum == 2 * k)
        {
            sort(arr, arr + n, greater<int>());
            vector<int> sumSubarray = includeElement(arr, n, k);
            int temp = 0;
            for (int i = 0; i < sumSubarray.size(); i++)
            {
                temp = temp + sumSubarray[i];
            }
            if (temp == k)
            {
                cout << n << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }

        else
        {
            int ans = 0;
            sort(arr, arr + n, greater<int>());

            int tow1 = 0, tow2 = 0, i = 0;
            vector<int> used;
            while (tow1 < k && i < n)
            {
                tow1 += arr[i];
                used.push_back(arr[i]);
                ans++;
                i++;
            }

            int pointerInUsed = 0;
            vector<int> prefixForTow2;
            while (i < n && tow2 < k)
            {
                bool usedTow1 = false;
                for (int j = pointerInUsed; j < used.size(); j++)
                {
                    if (tow1 - used[j] + arr[i] >= k && pointerInUsed < used.size())
                    {
                        tow2 += used[j];
                        tow1 -= used[j];
                        tow1 += arr[i];
                        pointerInUsed = j;
                        pointerInUsed++;
                        usedTow1 = true;
                        i++;
                        break;
                    }
                }

                if (!usedTow1 && tow2 < k)
                {
                    tow2 += arr[i];
                    i++;
                }
                ans++;
            }
            if (tow1 >= k && tow2 >= k)
                cout << ans << endl;
            else
            {
                cout << -1 << endl;
            }
        }
    }
}