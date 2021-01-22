#include <iostream>
#include <cassert>
using namespace std;
#define MAX 100001

int prime[MAX];
int kPrime[MAX][6];

void seive()
{  for (int i = 2; i < MAX; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i; j < MAX; j += i)
                prime[j]++;
        }
  
    }

    for (int i = 2; i < MAX; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            kPrime[i][j] = kPrime[i - 1][j];
        }
        int v = prime[i];

        if (v >= 1 && v <= 5)
        {
            kPrime[i][v]++;
        }
    }
}

int main()
{
    seive();

    int t;
    cin >> t;
    assert(t >= 1 && t <= 10000);

    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        assert(a >= 2 && a < MAX);
        assert(b >= a && b < MAX);
        assert(k >= 1 && k <= 5);
        cout << kPrime[b][k] - kPrime[a - 1][k] << endl;
    }
}