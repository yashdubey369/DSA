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
        int a, b, c;
        cin >> a >> b >> c;
        int p = min(c / 2, b);
        b -= p;
        c -= 2 * p;
        int ans = 3 * p;
        p = min(b / 2, a);
        ans += 3 * p;
        cout << ans << endl;
    }
}