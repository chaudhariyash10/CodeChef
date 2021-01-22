#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return (a.second < b.second);
}

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, k;

        cin >> n >> k;
        int temp;
        vector<pair<int, int>> ducks;

        for (int i = 0; i < n + 1; i++)
        {
            cin >> temp;
            ducks.push_back(make_pair(i, temp));
        }

        sort(ducks.begin(), ducks.end(), compare);

        int i = 0, j = n;
        int logged = 0;
        for (int z = 0; z < n; z++)
        {
            if (ducks[i].second != 0)
            {
                if (ducks[i].second == k)
                {
                    cout << ducks[i].first << " " << k << " " << ducks[i + 1].first << " " << 0 << endl;
                    ducks[i].second = 0;
                    i++;
                }

                else if (ducks[i].second < k)
                {
                    int h = (ducks[j].second <= (k - ducks[i].second) ? ducks[j].second : (k - ducks[i].second));

                    cout << ducks[i].first << " " << ducks[i].second << " " << ducks[j].first << " " << h << endl;

                    ducks[j].second -= h;
                    ducks[i].second = 0;
                    while (ducks[j].second == 0)
                        j--;

                    i++;
                }
                else
                {
                    cout << ducks[i].first << " " << k << " " << (ducks[i].first == 0 ? 1 : 0) << " " << 0 << endl;
                    ducks[i].second -= k;
                }
                logged++;
            }
            else
            {
                i++;
            }
        }

        if (logged < n)
        {
            while (logged != n)
            {
                cout << 0 << " " << 0 << " " << 1 << " " << 0 << endl;
                logged++;
            }
        }
    }
}