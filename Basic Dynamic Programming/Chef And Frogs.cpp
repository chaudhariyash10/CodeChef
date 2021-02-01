#include <bits/stdc++.h>
#define maxn 100000
using namespace std;

struct frog
{
    int id, x;
} frogs[maxn];

bool byX(const frog &a, const frog& b)
{
    return a.x < b.x;
}

int compare[maxn];

int main()
{
    int n, p, k;
    cin >> n >> p >> k;

    for (int i = 0; i < n; i++)
    {
        frogs[i].id = i;
        cin >> frogs[i].x;
    }

    sort(frogs, frogs + n, byX);

    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        compare[frogs[i].id] = i;

        while (j < n && frogs[j].x <= frogs[j - 1].x + k)
        {
            compare[frogs[j].id] = i;
            ++j;
        }

        i = j - 1;
    }

    while (p--)
    {
        int a, b;
        cin >> a >> b;
        --a;
        --b;
        if (compare[a] == compare[b])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}