#include<bits/stdc++.h>

using namespace std;

int findGCD(int a, int b)
{
    if(a == 0)
        return b;


    return findGCD(b%a, a);
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int l, b;
        cin >> l >> b;

      
        cout << findGCD(l, b) << endl;
    }
}