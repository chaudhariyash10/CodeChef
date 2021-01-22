#include <iostream>
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

    sort(arr, arr + n);

    int i = 0;
    while (i < n)
    {
        cout << arr[i] << " ";
        int temp = arr[i];
        if (arr[i] == arr[i + 1])
        {
            while (i < n && temp == arr[i])
                i++;
        }
        else
        {
            i++;
        }
        
    }
}