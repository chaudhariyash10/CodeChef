#include <iostream>
#include <math.h>
using namespace std;

long long calFib(long long num)
{
    if (num == 1)
        return 0;
    else
    {
        return num + calFib(num - 1);
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long l;
        cin >> l;

        if (l == 1)
        {
            cout << 0 << endl;
            continue;
        }

        else
        {
            long long power = log2l(l);

            power = pow(2, power);

            long long fib = calFib(power);

            cout << fib % 10 << endl;
        }
    }
}