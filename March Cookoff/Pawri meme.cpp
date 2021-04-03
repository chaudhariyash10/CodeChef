#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int i = 0;

        while (i < s.size())
        {
            if (s[i] == 'p')
            {
                if (s[i + 1] == 'a')
                {
                    if (s[i + 2] == 'r')
                    {
                        if (s[i + 3] == 't')
                        {
                            if (s[i + 4] == 'y')
                            {
                                s[i + 2] = 'w';
                                s[i + 3] = 'r';
                                s[i + 4] = 'i';
                                i = i + 5;
                            }

                            else
                                i = i + 4;
                        }
                        else
                            i = i + 3;
                    }
                    else
                        i = i + 2;
                }
                else
                    i = i + 1;
            }
            else
                i++;
        }

        cout << s << endl;
    }
}