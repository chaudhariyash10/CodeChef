#include <iostream>

using namespace std;

unsigned long long GCD(unsigned long long a, unsigned long long b)
{
    if (a == 0)
        return b;
    return GCD(b % a, a);
}

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        unsigned long long a, b, oneGCD;
        cin >> a >> b;

        oneGCD = GCD(a, b);

        for (unsigned long long i = 1; i <= b; i++)
        {
            if (GCD(a + i, b) == oneGCD)
            {
                cout << i << endl;

                break;
            }
        }
    }
}