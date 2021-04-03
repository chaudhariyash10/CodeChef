#include <iostream>
#include <iomanip>
using namespace std;

float round(float var)
{
    // 37.66666 * 100 =3766.66
    // 3766.66 + .5 =3767.16    for rounding off value
    // then type cast to int so value is 3767
    // then divided by 100 so the value converted into 37.67
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        float a, b, c, v;
        cin >> a >> b >> c >> v;
        float x = 100 / (a * b * c * v);
        float p = round(x);
        cout << p << endl;
        if (p < 9.58)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}