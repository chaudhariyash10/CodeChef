#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int pow2[] = {2, 4, 8, 6};
    int t;
    cin >> t;
    while (t--)
    {
        long long k, d0, d1;
        cin >> k >> d0 >> d1;

        long long idx = (k + 5) % 5 - 1;

        if ((pow2[idx] * (d0 + d1)) % 3 == 0)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}