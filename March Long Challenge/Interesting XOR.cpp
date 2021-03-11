#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int c;
        cin >> c;

        int mask = 1;
        int temp = c;
        string binary = "";
        while (temp > 0)
        {
            binary = to_string(temp % 2) + binary;
            temp /= 2;
        }
        bool flag = true;
        long long a = 0, b = 0;
        for (int i = 0; i < binary.size(); i++)
        {
            if (binary[i] == '1' && flag)
            {
                a = a * 2 + 1;
                flag = false;
            }
            else if (binary[i] == '1')
            {
                b = b * 2 + 1;
                a = a * 2;
            }
            else
            {
                a = a * 2 + 1;
                b = b * 2 + 1;
            }
        }
        cout << a * b << endl;
    }
}