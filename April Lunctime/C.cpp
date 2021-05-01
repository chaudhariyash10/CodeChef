#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--)
    {
        long long n, w, wr;
        cin >> n >> w >> wr;
        bool flag = false;
        w = w - wr;
        bool isPre[100005];
        for (int i = 0; i < 100005; i++)
            isPre[i] = false;

        long long temp;
        long long maxWei = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (isPre[temp])
            {
                maxWei += 2 * temp;
                isPre[temp] = false;
            }
            else
            {
                isPre[temp] = true;
            }

            if (maxWei >= w)
                flag = true;
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}