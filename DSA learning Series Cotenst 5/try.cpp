#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int c_semi(int number)
{
    int count = 0;

    int sq = sqrt(number);

    bool is_not_square = true;

    if (sq * sq == number)
        is_not_square = false;

    for (int i = 2; count < 2 && i * i <= number; ++i)
    {
        while (number % i == 0)
        {
            number /= i;
            ++count;
        }
    }

    if (number > 1)
        ++count;

    if (count == 2 && is_not_square)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int number;
        cin >> number;
        string r = "NO";

        for (int i_n = 2; i_n <= number / 2; i_n++)
        {
            if (c_semi(i_n) && c_semi((number - i_n)))
            {
                r = "YES";
                break;
            }
        }

        cout << r << endl;
    }

    return 0;
}
