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
        int n, k, ans = 0;
        cin >> n >> k;
        int a[n];
        for (auto &x : a)
            cin >> x;
        int prefix[n+1];
        sort(a,a+n);
        prefix[0] = 0;
        for (int i = 0; i < n; i++)
        {
            prefix[i+1] = prefix[i] + a[i];
        }
        for (int i = 0; i <=k; i++)
        {
            ans = max(ans, prefix[n-(k- i)] - prefix[2 * i]);
        }
        cout << ans << endl;
    //     for(auto x:prefix) cout<<x<<" ";
    //     cout<<endl;
    }
}