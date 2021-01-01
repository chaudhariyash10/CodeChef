#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        char s[n], p[n];
        int countS = 0, countP = 0;
        int posSumP = 0, posSumS = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            if (s[i] == '1')
            {
                countS++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            if (p[i] == '1')
            {
                countP++;
            }
        }

        if (countP != countS)
        {
            cout << "No" << endl;
            continue;
        }

        bool flag = true;
        int found_0_before_in_s = 0;

        int i = 0, j = 0;

        while (i < n && j < n)
        {
            while (s[i] != '1' && i < n)
            {
                i++;
            }
            while (p[j] != '1' && j  < n)
            {
                j++;
            }

            if (i > j)
            {
                flag = false;
                break;
            }
            i++;
            j++;
        }
        if (!flag)
            cout << "No" << endl;
        else
        {
            cout << "Yes" << endl;
        }
    }
}