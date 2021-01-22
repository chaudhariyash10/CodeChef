#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a, b;
        bool possible = false;
        ll ans = -1;
        for (int i = sqrt(n); i >= 1; --i)
        {
            if (n % i == 0 && i != (n / i))
            {
                a = (n / i + i) / 2;
                b = (n / i - i) / 2;
                if (b * b + n == a * a)
                {
                    possible = true;
                    if (ans == -1)
                    {
                        ans = b;
                    }
                    else
                    {
                        ans = min(ans, 1ll * b);
                    }
                }
            }
        }
        if (possible)
        {
            ans = ans * ans;
        }
        cout << ans << endl;
    }
    return 0;
}