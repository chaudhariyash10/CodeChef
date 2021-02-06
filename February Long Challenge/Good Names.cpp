#include <bits/stdc++.h>

using namespace std;

struct hash_pair
{
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2> &p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        unordered_map<string, bool> umap;

        string names[n];
        string s;

        bool flag = true;
        cin >> names[0];
        umap[names[0]] = true;
        for (int i = 1; i < n; i++)
        {
            cin >> names[i];
            umap[names[i]] = true;

            if (names[i][0] != names[i - 1][0])
                flag = false;
        }

        if (flag == true)
        {
            cout << 0 << endl;
            continue;
        }
        unordered_map<pair<string, string>, bool, hash_pair> taken;

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (names[i][0] != names[j][0])
                {
                    string temp1 = names[i];
                    string temp2 = names[j];

                    char temp = temp1[0];
                    temp1[0] = temp2[0];
                    temp2[0] = temp;

                    if (umap[temp1] == false && umap[temp2] == false)
                    {
                        pair<string, string> p1(temp1, temp2);
                        pair<string, string> p2(temp2, temp1);
                        if (taken[p1] == false)
                        {
                            count += 2;
                            taken[p1] = true;
                            taken[p2] = true;
                        }
                    }
                }
            }
        }
        cout << count << endl;
    }
}