#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    long long arr[t];

    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + t);

    long long cur = 0;
    long long ans = INT_MIN;

    for (int i = 0; i < t; i++)
    {
        cur = arr[i] * (t - i);

        if (cur > ans)
            ans = cur;
    }
    
    cout << ans << endl;
}