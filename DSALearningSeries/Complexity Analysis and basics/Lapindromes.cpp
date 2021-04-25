#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int firstHalf[26];
        int secondHalf[26];

        for (int i = 0; i < 26; i++)
        {
            firstHalf[i] = 0;
            secondHalf[i] = 0;
        }
        int left = 0;
        int right = s.size() / 2;
        int lim = right;
        if (s.size() & 1)
        {
            right++;
        }
        lim--;

        // cout << lim << endl;
        while (left <= lim)
        {
            firstHalf[(int)s[left] - 97]++;
            secondHalf[(int)s[right] - 97]++;
            left++;
            right++;
        }
        bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            if (firstHalf[i] != secondHalf[i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}