#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        int ans = 0;

        while (num > 0)
        {
            ans = ans * 10 + num % 10;
            num /= 10;
        }
        cout << ans << endl;
    }
}