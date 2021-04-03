#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x, r, m;

        cin >> x >> r >> m;

        if (x >= r * 60)
        {
            if (m >= r)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }

        else
        {
            if (2 * r * 60 <= m * 60 + x)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}