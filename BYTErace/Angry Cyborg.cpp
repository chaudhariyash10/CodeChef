#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        int arr[n + 2] = {};
        int queryStart[n + 2] = {};
        int queryEnd[n + 2] = {};
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            queryStart[l]++;
            queryEnd[r + 1]--;
        }

        long long count = 0, display = 0;

        for (int i = 1; i < n + 1; i++)
        {
            count += queryStart[i];
            count += queryEnd[i];
            if (count == 0)
                display = 0;
            else
                display += count;
            cout << display << " ";
        }
        cout << endl;
    }
}
