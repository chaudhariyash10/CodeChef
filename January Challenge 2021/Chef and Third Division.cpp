#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, d;
        cin >> n >> k >> d;

        int sum = 0, temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            sum += temp;
        }
        int f = sum / k;

        cout << min(d, f) << endl;
    }
}