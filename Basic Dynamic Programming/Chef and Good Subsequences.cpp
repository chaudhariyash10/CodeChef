#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    long goodSequences[n + 2];
    goodSequences[0] = 1;
    int distinctIndex = 0;
    for (int i = 1; i < n + 2; i++)
    {
        ;
    }
}