#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    int window[k];
    int l = 0, r = k - 1;

    for (int i = 0; i < k; i++)
    {
        window[i] = arr[i];
    }

    if (k % 2 == 0)
    {
        while (r < n)
        {
            sort(window, window + k);
            float med = ((float)window[(k - 1) / 2] + window[k / 2]) / 2;
            cout << med << " ";
            int insert = arr[r + 1], remove = arr[l];
            l++;
            r++;
            for (int i = 0; i < k; i++)
            {
                if (window[i] == remove)
                {
                    window[i] = insert;
                    break;
                }
            }
        }
    }
    else
    {
        while (r < n)
        {
            sort(window, window + k);
            cout << window[k / 2] << " ";
            int insert = arr[r + 1], remove = arr[l];
            l++;
            r++;
            for (int i = 0; i < k; i++)
            {
                if (window[i] == remove)
                {
                    window[i] = insert;
                    break;
                }
            }
        }
    }
}