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

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        bool flag = false;
        sort(arr, arr + n);

        int remaining = 0;
        for (int i = 0; i < n; i++)
        {
            if (i + 1 < arr[i])
            {
                cout << "Second" << endl;
                flag = flag = true;
                break;
            }

            else
            {
                remaining +=  i + 1 - arr[i];
            }
        }
        if (flag)
            continue;
        if (remaining % 2 == 0)
            cout << "Second" << endl;
        else
            cout << "First" << endl;
    }
}