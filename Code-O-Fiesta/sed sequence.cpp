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

        unsigned long long sum = 0;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            sum += temp;
        }

        if(sum % k == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << 1 << endl;
        }
        
        
    }
}