#include <bits/stdc++.h>

using namespace std;

struct frog
{
    int wt;
    int index;
    int jump;
};

bool compare(const frog &frog1, const frog &frog2)
{
    return frog1.wt < frog2.wt;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        frog frogs[n];

        for (int i = 0; i < n; i++)
        {
            cin >> frogs[i].wt;
            frogs[i].index = i + 1;
        }
        for (int i = 0; i < n; i++)
            cin >> frogs[i].jump;

        sort(frogs, frogs + n, compare);

        // for (int i = 0; i < n; i++)
        // {
        //     cout << frogs[i].index << " " << frogs[i].wt << " " << frogs[i].jump << endl;
        // }

        int hits = 0;

        for (int i = 1; i < n; i++)
        {
            if (frogs[i].index <= frogs[i - 1].index)
            {
                int newJump = ((frogs[i - 1].index - frogs[i].index) / frogs[i].jump + 1);
                hits += newJump;
                frogs[i].index += newJump * frogs[i].jump;
            }
        }
        cout << hits << endl;
    }
}