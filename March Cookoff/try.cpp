#include <iostream>
using namespace std;

int arr[1000001];

int main()
{
    for (int i = 2; i < 1000001; i++)
    {
        for (int j = i; j < 1000001; j += i)
            arr[j]++;
    }

    int count = 0;
    for (int i = 1; i < 1000001; i++)
        if ((arr[i] + 1) % 2 == 1)
            count++;
    cout << count;
}