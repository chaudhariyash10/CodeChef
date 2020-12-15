#include<iostream>

using namespace std;

int main()
{
    int d1,d2,v1,v2,p;

    cin >> d1 >> v1 >> d2 >> v2 >> p;

    int noOfDays = 0;
    int generatedVaccines = 0;

    //Make the d1 smaller

    if(d2 < d1)
    {
        int tempd = d1;
        int tempV = v1;

        d1 = d2;
        v1 = v2;

        d2 = tempd;
        v2 = tempV;
    }

    while(generatedVaccines < p)
    {
        noOfDays++;

        if(noOfDays >= d1)
            generatedVaccines += v1;

        if (noOfDays >= d2)
            generatedVaccines += v2;
    }

    cout << noOfDays;
}