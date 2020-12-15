#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;

        cin >> n >> k;

        int totalSum = (n * (n + 1)) / 2;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        int reqNeg = n - k;

        while (reqNeg--)
        {
            int currentSum = totalSum;
            bool flag = true;
            for (int i = n - 1; i >= 0 && flag; i--)
            {
                if (arr[i] > 0 && currentSum - 2 * arr[i] < 0)
                {
                    totalSum = totalSum - 2 * arr[i];
                    currentSum -= arr[i];
                    arr[i] = -arr[i];
                    flag = false;
                }
                else
                    currentSum = currentSum - arr[i];
            }
        }

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
            cout << endl;
    }
}