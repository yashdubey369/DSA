#include <bits/stdc++.h>
using namespace std;

#define int long long int
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
        cin >> x;
    int d[n];
    for (int i = 0; i < n; i++)
    {
        d[i] = abs(a[i] - i - 1);
    }
    sort(d, d + n);
    int y = d[0];
    for ( auto x:d)
        y = __gcd(y, x);
    cout << y << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}