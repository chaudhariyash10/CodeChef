#include <iostream>
#include <math.h>
using namespace std;

int getP(int num)
{
    if (num == 0)
        return 1;
    int x = log2(num);
    return pow(2, x);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, x;

        cin >> n >> x;

        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n - 1; i++)
        {
            while (arr[i] != 0 && x)
            {
                int p = getP(arr[i]);

                arr[i] = (arr[i] ^ p);

                int j = -1;

                for (int z = i + 1; z < n; z++)
                    if (arr[z] > (arr[z] ^ p))
                    {
                        j = z;
                        break;
                    }

                if (j == -1)
                    j = n - 1;
                    
                arr[j] = (arr[j] ^ p);
                x--;
            }
        }

        if (x != 0)
        {
            if (x % 2 == 1 && n == 2)
            {
                int p = getP(arr[0]);
                arr[0] = (arr[0] ^ p);
                arr[1] = (arr[1] ^ p);
            }
        }

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}