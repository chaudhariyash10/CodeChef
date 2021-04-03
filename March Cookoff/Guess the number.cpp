#include <iostream>
using namespace std;

// int arr[1000001];

// int oddFactors[2000];

// int z = 0;

// void seive()
// {
//     for (int i = 2; i < 1000001; i++)
//     {
//         for (int j = i; j < 1000001; j += i)
//             arr[j]++;
//     }

//     for (int i = 1; i < 1000001; i++)
//     {
//         if ((arr[i] + 1) % 2 == 1)
//         {
//             oddFactors[z] = i;
//             z++;
//         }
//     }
// }

int main()
{
    // seive();
    // int count = 0;
    // for (int i = 0; i < z; i++)
    // {
    //     cout << oddFactors[i] << endl;
    //     count++;
    // }
    // cout << count;
    // // int t;
    // // scanf("%d", &t);

    // // while (t--)
    // // {
    // //     int ans = 0;
    // //     int x = 0;
    // //     do
    // //     {
    // //         fflush(stdout);
    // //         printf("%d", oddFactors[x]);
    // //         x++;
    // //         scanf("%d", &ans);

    // //         if (ans == -1)
    // //             return 0;
    // //     } while (ans != 1);
    // // }

    int t;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        string a;
        for (int i = 1; i <= 1000; i++)
        {
            fflush(stdout);
            cout << i * i << endl;

            cin >> ans;
            cin.get();

            if (ans == -1)
                return 0;
            if (ans == 1)
                break;
        }
    }
}