#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int length = s.size();

        unordered_map<char, int> umap;

        int count = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (umap[s[i]])
                umap[s[i]]++;
            else
                umap[s[i]] = 1;
        }

        for(auto& p: umap)
        {
            if(p.second >= 2)
            {
                while(length >= 3 && p.second >= 2)
                {
                    count++;
                    length = length - 3;
                    p.second -= 2;
                }
            }
        }

        cout << count << endl;
    }
}