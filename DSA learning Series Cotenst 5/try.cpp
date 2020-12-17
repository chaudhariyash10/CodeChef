#include<bits/stdc++.h>

using namespace std;

long long giveValidStep(long long m, long long x, long long a)
{
    long long div = (m - a) / x;

    cout << m << x << a <<div;

    return div * x + a;
}

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
    long long num  = log2l(9);
    num = pow(2, num);

    num = calFib(num);
    cout << num;
}