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
        cin >> arr[0];
        int lim = arr[0];
        int count = 1;

        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] <= lim)
            {
                count++;
                lim = arr[i];
            }
        }

        cout << count << endl;
    }
}