#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[2 * n - 1][2 * n - 1];
    int p = n;
    int r1 = 0, r2 = 2 * n - 2;
    int c1 = 0, c2 = 2 * n - 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = r1; j <= c2; j++)
        {
            arr[r1][j] = p;
            arr[r2][j] = p;
            arr[j][c1] = p;
            arr[j][c2] = p;
        }

        p--;
        r1++;
        r2--;
        c1++;
        c2--;
    }

    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}