#include <iostream>
using namespace std;

int main()
{

    int n, x;
    cin >> n >> x;

    cout << (n % x == 0) ? "Yes" : "No";
}