#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, xr, yr, d;
        cin >> x >> y >> xr >> yr >> d;

        int canSurvive = min(x / xr, y / yr);

        if (d <= canSurvive)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}