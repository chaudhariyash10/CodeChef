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

        int arr[n];
        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > maxi)
                maxi = arr[i];
            mini = (arr[i] < mini ? arr[i] : mini);
        }

        cout << (long)2 * (maxi - mini) << endl;
    }
}
