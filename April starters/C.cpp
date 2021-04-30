#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int tx, ty;
        cin >> tx >> ty;

        int px, py;
        cin >> px >> py;

        int tsteps = n - tx + m - ty;
        int psteps = 0;

        int Pmini = min(n - px, m - py);

        psteps = n - px + m - py - Pmini;

        if (psteps < tsteps)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }
}