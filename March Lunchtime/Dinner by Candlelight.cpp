#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, y, x;

        cin >> a >> y >> x;

        if (y == a)
            cout << x * a << endl;
        else if (y > a)
            cout << (x * a + 1) << endl;
        else
            cout << (a - y) * x << endl;
    }
}