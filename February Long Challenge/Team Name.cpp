#include <bits/stdc++.h>

using namespace std;

// struct hash_pair
// {
//     template <class T1, class T2>
//     size_t operator()(const pair<T1, T2> &p) const
//     {
//         auto hash1 = hash<T1>{}(p.first);
//         auto hash2 = hash<T2>{}(p.second);
//         return hash1 ^ hash2;
//     }
// };
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<string, vector<char>> umap;
        string s;
        char first;
        for (int i = 0; i < n; i++)
        {
            cin >> first;
            cin >> s;
            umap[s].push_back(first);
        }

        int count = 0;

        // cout << "hiii" << endl;
        for (unordered_map<string, vector<char>>::iterator i = umap.begin(); i != umap.end(); i++)
        {
            // cout << i->first << endl;
            unordered_map<string, vector<char>>::iterator x = i;
            x++;
            // cout << x->first << endl;
            if (x != umap.end())
                for (unordered_map<string, vector<char>>::iterator j = x; j != umap.end(); j++)
                {
                    // cout << j->first << endl;
                    vector<char> v1 = i->second;
                  
                    vector<char> v2 = j->second;

                    set<int> distinct;
                    for (int i1 = 0; i1 < v1.size(); i1++)
                    {
                        distinct.insert(v1[i1]);
                    }
                    for (int i2 = 0; i2 < v2.size(); i2++)
                        distinct.insert(v2[i2]);

                    count += (distinct.size() - v1.size()) * (distinct.size() - v2.size());
                }
        }

        // for (auto p : umap)
        // {
        //     cout << p.first << ": ";
        //     for (int i = 0; i < p.second.size(); i++)
        //         cout << " " << p.second[i];
        //     cout << endl;
        // }

        cout << count * 2 << endl;
    }
}