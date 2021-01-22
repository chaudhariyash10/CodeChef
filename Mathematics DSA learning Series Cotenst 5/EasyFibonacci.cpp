#include <iostream>
#include <math.h>
using namespace std;


int main()
{

    int prefixArray[60];

    prefixArray[0] = 0;
    prefixArray[1] = 1;

    for (int i = 2; i < 60; i++)
    {
        prefixArray[i] = (prefixArray[i - 1] + prefixArray[i - 2]) % 10;
    }
    int t;
    cin >> t;

    while (t)
    {
        t--;
        long long n;
        cin >> n;

        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }

        else
        {
            long long ans;
            long long power = log2(n);

            long long found = pow(2, power);

            if (n < found)
                power--;

            found = pow(2, power);
            ans = found - 1;

            cout << prefixArray[ans % 60]  << endl;
        }
    }
}