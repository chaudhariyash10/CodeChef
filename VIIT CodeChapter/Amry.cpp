#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int temp, leftMost = INT_MAX, rightMost = INT_MIN;
        for (int i = 0; i < m; i++)
        {
            cin >> temp;

            if (temp < leftMost)
                leftMost = temp;
            if (temp > rightMost)
                rightMost = temp;
        }

        for (int i = 0; i < n; i++)
        {
            cout << max(abs(leftMost - i), abs(rightMost - i)) << " ";
        }
        cout << endl;
    }
}