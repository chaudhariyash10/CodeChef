#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int grid[n][m];
        bool cap[n][m];
        char temp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> temp;
                grid[i][j] = (int)temp - 48;
                cap[i][j] = false;
            }
        }

        vector<long long> tot;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // cout << i << " " << j << endl;
                long long count = 0;
                if (grid[i][j] == 1 && cap[i][j] == false)
                {
                    stack<pair<int, int>> st;
                    st.push(make_pair(i, j));

                    while (!st.empty())
                    {

                        auto k = st.top().first;
                        auto l = st.top().second;
                        if (cap[k][l] == false)
                            count++;
                        cap[k][l] = true;
                        st.pop();
                        if (k - 1 >= 0)
                        {
                            if (grid[k - 1][l] == 1 && cap[k - 1][l] == false)
                            {
                                st.push(make_pair(k - 1, l));
                                // cout << i << " " << j << endl;
                            }
                        }
                        if (k + 1 < n)
                        {
                            if (grid[k + 1][l] == 1 && cap[k + 1][l] == false)
                                st.push(make_pair(k + 1, l));
                        }
                        if (l - 1 >= 0)
                        {
                            if (grid[k][l - 1] == 1 && cap[k][l - 1] == false)
                                st.push(make_pair(k, l - 1));
                        }
                        if (l + 1 < m)
                        {
                            if (grid[k][l + 1] == 1 && cap[k][l + 1] == false)
                                st.push(make_pair(k, l + 1));
                        }
                    }
                    // cout << count << endl;
                    tot.push_back(count);
                }
            }
        }

        sort(tot.begin(), tot.end(), greater<int>());
        long long chef = 0;
        // cout << tot.size() << endl;
        for (int i = 1; i < tot.size(); i += 2)
        {
            // cout << tot[i] << " ";
            chef += tot[i];
        }
        cout << chef << endl;
    }
}