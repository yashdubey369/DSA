#include <bits/stdc++.h>
using namespace std;

#define int long long int
void yash()
{
    int n, k, cnt1 = 1, ans = 1;
    cin >> n >> k;
    vector<int> v(n + 1, 0);
    v[1] = 1;
    v[n] = 1;
    int i = 2;
    while (i < n + 1)
    {
        if ((i) % k == cnt1)
            v[i] = 1;
        i++;
    }
    int y = 2;
    i = n;
    while (i > 1)
    {
        ans += v[i - 1];
        if (ans < (y - 1) / k + 1)
        {
            v[i - 1] = 1;
            ans++;
        }
        y++;
        i--;
    }
    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += v[i];
    }

    cout << ans << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        yash();
    }
}