#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;
int main()
{
    int n;
    cin >> n;

    unordered_map<string, int> umap;
    vector<string> names;

    string s;
    int k;

    for (int i = 0; i < n; i++)
    {
        cin >> s >> k;
        umap[s] += k;
        names.push_back(s);
    }

    int an = -2000000;
    set<string> ans;
    for (pair<string, int> p : umap)
    {
        if (an < p.second)
            an = p.second;
    }
    for (pair<string, int> p : umap)
    {
        if (an == p.second)
            ans.insert(p.first);
    }

    for (int i = 0; i < names.size(); i++)
    {
        if (ans.find(names[i]) != ans.end())
        {
            if (umap[names[i]] > 0)
                cout << names[i];
            return 0;
        }
    }
}