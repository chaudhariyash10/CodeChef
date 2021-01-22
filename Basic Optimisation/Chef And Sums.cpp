#include <iostream>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int mini = INT32_MAX, miniInd;
        int nums[n];

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            if (mini > nums[i])
            {
                mini = nums[i];
                miniInd = i;
            }
        }

        cout << miniInd + 1 << endl;
    }
}