#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long num;
        cin >> num;

        unsigned long long ans = 0;

        ans += (num / 4) * 44;

        if (num == 1)
            ans = 20;

        else if (num == 2)
            ans = 36;

        else if (num == 3)
            ans = 51;

        else if (num % 4 == 0)
            ans += 16;

        else if (num % 4 == 1)
            ans += 32;

        else if (num % 4 == 2)
            ans += 44;

        else if (num % 4 == 3)
            ans += 55;

        cout << ans << endl;
    }
}