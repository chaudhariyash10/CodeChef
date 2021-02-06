#include <bits/stdc++.h>

using namespace std;

int conv24(int hh)
{
    if (hh == 12)
        return 12;
    else
        return 12 + hh;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
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

        if (chefP == 'P')
            chefH = conv24(chefH);

        if (chefP == 'A' && chefH == 12)
            chefH = 0;

        cin.ignore(INT_MAX, '\n');
        int n;
        cin >> n;

        while (n--)
        {
            int startH = 0, endH = 0;
            int startM = 0, endM = 0;
            char startP, endP;
            cin.get();
            getline(cin, s, ' ');
            i = 0;
            for (i = 0; i < 2; i++)
            {
                startH = startH * 10 + (s[i] - 48);
            }
            i++;
            for (; i < 5; i++)
            {
                startM = startM * 10 + (s[i] - 48);
            }

            cin >> startP;
            cin.get();
            cin.get();
            getline(cin, s, ' ');
            i = 0;

            for (; i < 2; i++)
            {
                endH = endH * 10 + (s[i] - 48);
            }
            i++;
            for (; i < 5; i++)
            {
                endM = endM * 10 + (s[i] - 48);
            }

            cin >> endP;
            cin.get();
            if (endP == 'P')
                endH = conv24(endH);
            if (startP == 'P')
                startH = conv24(startH);

            if (startP == 'A' && startH == 12)
                startH = 0;

            if (endP == 'A' && endH == 12)
                endH = 0;

            // cout << startH << " " << startM << " " << startP << " " << endH << " " << endM << " " << endP << endl;

            if (startH > chefH || endH < chefH)
            {
                cout << 0;
            }
            else if (startH == chefH && chefH < endH)
            {
                if (startM <= chefM)
                    cout << 1;
                else
                    cout << 0;
            }
            else if (startH < chefH && chefH == endH)
            {
                if (endM >= chefM)
                    cout << 1;
                else
                    cout << 0;
            }
            else if (startH == chefH && chefH == endH)
            {
                if (startM <= chefM && endM >= chefM)
                    cout << 1;
                else
                    cout << 0;
            }
            else{
                cout << 1;
            }
        }
        cout << endl;
    }
}