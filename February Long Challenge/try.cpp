#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.get();
    int chefH = 0, chefM = 0;
    char chefP;

    string s;
    getline(cin, s, ' ');
    int i = 0;
    for (i = 0; i < 2; i++)
    {
        chefH = chefH * 10 + (s[i] - 48);
    }
    i++;
    for (; i < 5; i++)
    {
        chefM = chefM * 10 + (s[i] - 48);
    }

    cin >> chefP;

    cout << chefH << " " << chefM << " " << chefP;

}