#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int nums[8001];
int main()
{
    // for (int i = 0; i < 8001; i++)
    //     count[i] = 0;
    int n, k;
    cin >> n >> k;
    int arr[n + 1];
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
        nums[arr[i]]++;
    }

    int limit = min(k, 1007);

    for (int i = 0; i < limit; i++)
    {
        
    }
}