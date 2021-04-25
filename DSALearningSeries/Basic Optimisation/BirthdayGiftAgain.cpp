#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int count1 = 0, beauty = 0;

        int N = s.size();
        for (int x = 1; x * x + x <= N; x++)
        {

            int l = 0, r = x + x * x - 1;
            count1 = 0;
            for (int i = l; i <= r; i++)
                if (s[i] == '1')
                    count1++;


            while (r < N)
            {
                if (x == count1)
                    beauty++;
                    
                if (s[l] == '1')
                    count1--;
                l++;

                r++;
                if (s[r] == '1')
                    count1++;
            }
        }
        cout << beauty << endl;
    }
}