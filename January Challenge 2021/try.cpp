#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int number_of_strings = n / 4;
    string ans;
    while (number_of_strings--)
    {
        string s;
        char temp;

        for (int i = 0; i < 4; i++)
        {
            cin >> temp;
            s += temp;
        }

        cout << s << endl;
    
    }
}