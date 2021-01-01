#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n >> m;

        long mat[n][m];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];

        bool is_good = true;

        int count = 0;
        vector<int> row;
        vector<int> col;
        for (int i = 0; i < m; i++)
        {
            int xx = 0, yy = i;

            while (xx < n - 1 && yy < m - 1)
            {
                if (mat[xx][yy] != mat[xx + 1][yy + 1])
                {
                    is_good = false;
                    row.push_back(xx);
                    col.push_back(yy);
                }
            }
        }

        for (int i = 1; i < n; i++)
        {
            int xx = i, yy = 0;

            while (xx < n - 1 && yy < m - 1)
            {
                if (mat[xx][yy] != mat[xx + 1][yy + 1])
                {
                    is_good = false;
                    count++;
                    row.push_back(xx);
                    col.push_back(yy);
                }
            }
        }

        int q;
        cin >> q;
        while (q--)
        {
            int x, y, v;
            cin >> x >> y >> v;
            mat[x][y] = v;

            while (x != 0 && y != 0)
            {
                x--;
                y--;
            }
            for (int i = 0; i < row.size(); i++)
                while (x < n - 1 && y < m - 1)
                {

                    if (mat[x][y] != mat[x + 1][y + 1])
                    {
                        is_good = false;
                        count++;
                        cout << "No"<<endl;
                    }
                }
        }
    }
}