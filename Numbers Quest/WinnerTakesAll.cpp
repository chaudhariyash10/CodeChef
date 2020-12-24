#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

void findWinner(int n, int k = 1)
{
    int cnt = 0;

    // Check if n == 1 then
    // player 2 will win
    if (n == 1)
        cout << "Grinch" << endl;

    // Check if n == 2 or n is odd
    else if ((n & 1) or n == 2)
        cout << "Me" << endl;

    else
    {
        int tmp = n;
        int val = 1;

        // While n is greater than k and
        // divisible by 2 keep
        // incrementing tha val
        while (tmp > k and tmp % 2 == 0)
        {
            tmp /= 2;
            val *= 2;
        }

        // Loop to find greatest
        // odd divisor
        for (int i = 3; i <= sqrt(tmp); i++)
        {
            while (tmp % i == 0)
            {
                cnt++;
                tmp /= i;
            }
        }
        if (tmp > 1)
            cnt++;

        // Check if n is a power of 2
        if (val == n)
            cout << "Grinch" << endl;

        else if (n / tmp == 2 and cnt == 1)
            cout << "Grinch" << endl;

        // Check if cnt is not one
        // then player 1 wins
        else
            cout << "Me" << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        findWinner(n);
    }
}