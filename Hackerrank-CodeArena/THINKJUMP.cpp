#include <bits/stdc++.h>
using namespace std;
int steps(int source, int step, int dest)
{
    // base cases
    if (source > dest)
        return source - dest;
    if (source == dest)
        return step;

    // at each point we can go either way

    // if we go on positive side
    int pos = steps(source + step + 1,
                    step + 1, dest);

    // if we go on negative side
    int neg = steps(source - step - 1,
                    step + 1, dest);

    // minimum of both cases
    return min(pos, neg);
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << steps(0,0,n) << endl;
    }
    return 0;
}
