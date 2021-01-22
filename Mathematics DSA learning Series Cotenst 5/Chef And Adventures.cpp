#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

//Returns the number which possible to go from A to M with adding X
long long giveValidStep(long long m, long long x, long long a)
{
    long long div = (m - a) / x;
    if(div < 0)
        return INT_MAX;
    return div * x + a;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        long long m, n, x, y, a = 1, b = 1;
        cin >> m >> n >> x >> y;

        if (
            (m == giveValidStep(m, x, a) && n == giveValidStep(n, y, b)) ||
            (m == giveValidStep(m, x, a + 1) && n == giveValidStep(n, y, b + 1)))
        {
            cout << "Chefirnemo" << endl;
        }
        else
        {
            cout << "Pofik" << endl;
        }
    }
    return 0;
}