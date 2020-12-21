#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        long long temp;
        long long ratings[n];

        for (long long i = 0; i < n; i++)
        {
            cin >> ratings[i];
          
        }

        long long i = 0, j = 2, maxSum = INT32_MIN, curSum;
        curSum = ratings[0] + ratings[1] + ratings[2];

        while (i < n)
        {
            if (curSum > maxSum)
                maxSum = curSum;

            curSum -= ratings[i%n];
            i++;
            j++;
            curSum += ratings[j%n];
        }



        cout << maxSum << endl;
    }
}