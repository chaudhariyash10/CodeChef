#include <bits/stdc++.h>
using namespace std;

struct stud
{
    int index, height;
};

bool comp(stud &s1, stud &s2)
{
    if (s1.height == s2.height)
        return s1.index < s2.index;
    return s1.height < s2.height;
}

int ans[10000000];

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        int ans[n];
        for (int i = 0; i < n; i++)
            cin >>
                arr[i];

        for (int i = 0; i < n; i++)
        {
            int count = 0;

            for (int j = i - 1; j >= 0; j--)
            {
                if (arr[j] > arr[i])
                    break;
                if (arr[i] == arr[j])
                    count++;
            }

            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] > arr[i])
                    break;
                if (arr[i] == arr[j])
                    count++;
            }

            ans[i] = count;
        }

        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}