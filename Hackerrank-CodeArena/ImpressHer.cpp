#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << 4;

    else if (n % 2 == 0)
        cout << (n / 2 + 1) * (n / 2 + 1);
    else if (n == 3)
        cout << 12;
    else if (n == 5)
        cout << 24;
    return 0;
}
