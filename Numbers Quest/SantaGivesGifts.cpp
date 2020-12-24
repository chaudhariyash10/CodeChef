#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long n, m, a, d, temp, firstDiv, count = 0, totalHouses;

        cin >> n >> m >> a >> d;

        totalHouses = m - n + 1;

        count += ((m - n) / a) + 1;
        count += ((m - n) / (a + d)) + 1;
        count += ((m - n) / (a + 2 * d)) + 1;
        count += ((m - n) / (a + 3 * d)) + 1;
        count += ((m - n) / (a + 4 * d)) + 1;



        cout << totalHouses - count << endl;
    }
}