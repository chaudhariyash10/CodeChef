#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;

int main()
{
    string s;
    cin >> s;
    int arr[s.size()];

    for (int i = 0; i < s.size(); i++)
    {
        arr[i] = (int)s[i] - 48;
    }

    long long count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (arr[i] % 4 == 0)
            count++;

        if (i > 0 && (arr[i] + arr[i - 1] * 10) % 4 == 0)
        {
            count += i;
            // cout << count << endl;
        }
        // cout << i << " " << count << endl;
    }

    cout << count;
}