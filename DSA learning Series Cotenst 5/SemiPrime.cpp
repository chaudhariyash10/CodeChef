#include <iostream>
#include <limits.h>
#include <vector>
#include <set>

using namespace std;

vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199};

bool isSemiPrime(int num)
{
    int l = 0, r = primes.size() - 1;

    while (l < r)
    {
        if (primes[l] * primes[r] == num)
            return true;

        else if (primes[l] * primes[r] < num)
            l++;
        else
            r--;
    }

    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int num;
        cin >> num;
        string ans = "NO";
        for (int i = 2; i <= num / 2; i++)
        {
            if (isSemiPrime(i) && isSemiPrime(num - i))
            {
                ans = "YES";
                break;
            }
        }

        cout << ans << endl;
    }
}