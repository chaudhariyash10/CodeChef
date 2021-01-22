#include <iostream>

using namespace std;
unsigned long long findGCD(unsigned long long a, unsigned long long b)
{
    if (a == 0)
        return b;

    return findGCD(b % a, a);
}

unsigned long long findLCM(unsigned long long a, unsigned long long b)
{
    unsigned long long gcd = findGCD(a, b);

    return (a / gcd) * b;
}
int main()
{
    unsigned long long t;
    cin >> t;

    while (t--)
    {
        unsigned long long n, a, b, k;
        cin >> n >> a >> b >> k;

        unsigned long long solved = n / a + n / b;
        unsigned long long lcm = findLCM(a, b);

        solved = solved - (2 * ( n / lcm));

        if (solved >= k)
            cout << "Win" << endl;
        else
            cout << "Lose" << endl;
        
    }
}