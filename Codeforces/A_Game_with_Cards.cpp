#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n;
        int a[n];
        for (auto &x : a)
            cin >> x;
        cin >> m;
        int b[m];
        for (auto &x : b)
            cin >> x;
        sort(a, a + n);
        sort(b, b + m);
        if (a[n - 1] > b[m - 1])
            cout << "Alice" << endl
                 << "Alice" << endl;
        else if (a[n - 1] < b[m - 1])
            cout << "Bob" << endl
                 << "Bob" << endl;
        else
            cout << "Alice" << endl
                 << "Bob" << endl;
    }
}