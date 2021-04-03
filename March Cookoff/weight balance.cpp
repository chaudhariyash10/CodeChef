#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w1, w2, M, x1, x2;
        cin >> w1 >> w2 >> x1 >> x2 >> M;

        if (w2 - w1 >= x1 * M && w2 - w1 <= x2 * M)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}