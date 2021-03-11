#include <bits/stdc++.h>
using namespace std;

int primes[1000002];

int main()
{
    primes[0] = 0;
    primes[1] = 0;
    int count = 0;
    for (int i = 2; i < 1000002; i++)
    {
        if (primes[i] == 0)
        {
            primes[i] = count;
            count++;

            for (int j = 2 * i; j < 1000002; j += i)
                primes[j]++;
        }

        else
            primes[i] = count;
    }

    // for (int i = 0; i < 10; i++)
    // {
    //     /* code */ cout << primes[i] << " ";
    // }

    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if (primes[x] > y)
            cout << "Divyam" << endl;
        else
            cout << "Chef" << endl;
    }
}