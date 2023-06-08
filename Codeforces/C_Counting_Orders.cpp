#include <bits/stdc++.h>
using namespace std;

#define int long long int
void solve()
{
    int n, y = 1;
    cin >> n;
    int arr[n], bjj[n];
    for (auto &x : arr)
        cin >> x;
    for (auto &x : bjj)
        cin >> x;
    sort(arr, arr + n);
    sort(bjj, bjj + n);
    int i=n-1;
    while(i>=0)
    {
        int k = n - ((upper_bound(arr, arr + n, bjj[i])) - arr);
        // cout<<k<<" ";
        y=((y%1000000007)*(((k)-(n-1-i))%1000000007))%1000000007;
        i--;
    }
    cout << y%1000000007 << endl;
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