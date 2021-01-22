#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    long long n, m;

    cin >> n >> m;
    vector<long long> B;
    long long temp;
    long long small = INT32_MAX;

    for (long long i = 0; i < n; i++)
    {
        cin >> temp;

        if (temp < small)
            small = temp;
    }

    for (long long i = 0; i < m; i++)
    {
        cin >> temp;
        B.push_back(temp);
    }

    sort(B.begin(), B.end());

    long long swaps = 0;

    for (long long i = 0; i < m; i++)
    {
        if (B[i] < small)
        {
            swaps += n;
        }
    }

    cout << swaps;
}