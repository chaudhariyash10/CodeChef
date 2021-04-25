
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            int pos, val;
            cin >> pos >> val;

            update(segTree, pos - 1, val, 0, n - 1, 0);
        }
        else
        {
            int l, r;
            cin >> l >> r;

            int ans = query(segTree, l - 1, r - 1, 0, n - 1, 0);

            if (x == 1)
            {
                cout << ans << endl;
            }
            else
            {
                cout << r - l + 1 - ans << endl;
            }
        }
    }