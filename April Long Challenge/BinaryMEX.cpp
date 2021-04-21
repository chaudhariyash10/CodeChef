#include <bits/stdc++.h>
using namespace std;

// bool isSubsequence(string s1, string s2)
// {
//     int j = 0;
//     for (int i = 0; i < s1.size(); i++)
//     {
//         if (s2[j] == s1[i])
//             j++;
//     }
//     if (j == s2.size())
//         return true;
//     return false;
// }

void generateSubsequence(string str, string s, unordered_map<string, bool> &umap)
{
    if (str.empty())
    {
        umap[s] = true;
        return;
    }

    // output is passed with including
    // the Ist characther of
    // Input string
    generateSubsequence(str.substr(1), s + str[0], umap);

    // output is passed without
    // including the Ist character
    // of Input string
    generateSubsequence(str.substr(1), s, umap);
}

string getBinary(string str, unordered_map<string, bool> &umap)
{
    queue<string> q;

    q.push("1");

    while (true)
    {
        string s2 = q.front();
        q.pop();

        if (umap[s2] == false)
            return s2;
        else
        {
            string s1 = s2;
            q.push(s1.append("0"));
            q.push(s2.append("1"));
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE

    //     // For getting input from input.txt file
    //     freopen("input.txt", "r", stdin);

    //     // Printing the Output to output.txt file
    //     freopen("output.txt", "w", stdout);

    // #endif
    int t;
    cin >> t;
    while (t--)
    {
        unordered_map<string, bool> umap;
        string s;
        cin >> s;

        bool isZero = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                isZero = true;
        } 
        if (!isZero)
        {
            cout << 0 << endl;
            continue;
        }
        generateSubsequence(s, "", umap);

        cout << getBinary(s, umap) << endl;
    }
}