#include <iostream>

using namespace std;

bool isPrime(int n)
{
    bool flag = true;

    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            flag = false;
        }
    }

    return flag;
}

bool isPalidrome(int n)
{
    int num = n, rev = 0;

    do
    {
        rev = (rev * 10) + num % 10;
        num = num / 10;
    } while (num > 0);

    return n == rev;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        bool ans = isPalidrome(n) && isPrime(n);

        if (ans)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}