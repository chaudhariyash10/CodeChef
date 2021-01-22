#include <iostream>
#include <algorithm>
#include <math.h>
#define MAX 11 //10000000001
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        unsigned long long n;
        cin >> n;

        long long count = 0;

        for (long long i = 1; i <= min((unsigned long long)700, n); i++)
        {
            if ((n - i) > 0)
                count += floor(sqrt(n - i));
        }

        cout << count << endl;
    }
}