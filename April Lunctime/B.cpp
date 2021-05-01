#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    long long sum = 0;
    long long temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum = (sum + temp + mod) % mod;
    }

    int q;
    cin >> q;
    long long suma = sum;
    while (q--)
    {
        long long s;

        cin >> s;
        sum = (sum * 2) % mod;

        cout << sum << endl;
    }
}