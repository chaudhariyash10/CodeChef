#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int i = 0, j = 0;

    unordered_map<int, int> umap;
    unordered_map<int, bool> present;
    int ans = 0;
    umap[arr[j]] = 1;
    present[arr[j]] = true;
    int remainings = 2;

    while (j < n)
    {
        if (remainings > 0)
        {
            j++;
            if (present[arr[j]])
            {
                if (umap[arr[j]] == 3)
                    while (arr[i] != arr[j])
                    {
                        if (umap[arr[i]] > 0)
                            umap[arr[i]]--;
                        i++;
                    }
                i++;
            }
        }
    }

    return 0;
}
