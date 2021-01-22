#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        unsigned long a, b, evenA, oddA, evenB, oddB;


        cin >> a >> b;

        evenA = a / 2;
        evenB = b / 2;

        oddA = (a % 2 == 0) ? a / 2 : (a / 2) + 1;
        oddB = (b % 2 == 0) ? b / 2 : (b / 2) + 1;

        cout << evenA * evenB + oddA * oddB << endl;
    }
}