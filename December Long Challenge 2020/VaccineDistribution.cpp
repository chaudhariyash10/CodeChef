#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, d;

        cin >> n >> d;
        int temp;

        int risked = 0, nonRisked = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> temp;

            if (temp >= 80 || temp <= 9)
                risked++;
            else
                nonRisked++;
        }

        int noOfDays = 0;

        if(risked % d == 0)
            noOfDays += risked / d;
        else
            noOfDays += risked / d + 1;


        if(nonRisked % d == 0)
            noOfDays += nonRisked / d;
        else
            noOfDays += nonRisked / d + 1;

        cout << noOfDays << endl;
    }
}