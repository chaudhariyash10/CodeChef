#include <iostream>

#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, char> umap;

    umap["0000"] = 'a';
    umap["0001"] = 'b';
    umap["0010"] = 'c';
    umap["0011"] = 'd';
    umap["0100"] = 'e';
    umap["0101"] = 'f';
    umap["0110"] = 'g';
    umap["0111"] = 'h';
    umap["1000"] = 'i';
    umap["1001"] = 'j';
    umap["1010"] = 'k';
    umap["1011"] = 'l';
    umap["1100"] = 'm';
    umap["1101"] = 'n';
    umap["1110"] = 'o';
    umap["1111"] = 'p';

    int t;
    cin >> t;
    while (t--)
    {
        string ans;
        int n;
        cin >> n;

        
        int number_of_strings = n / 4;
        while (number_of_strings--)
        {
            string s;
            char temp;
            for (int i = 0; i < 4; i++)
            {
                cin >> temp;
                s += temp;
            }
            ans += umap[s];
        }

        cout << ans << endl;
    }
}