#include <bits/stdc++.h>
using namespace std;

#define int long long int
void yash()
{
    int n, d = 0;
    cin >> n;
    map<int, vector<int>> y;
    int k = 0;
    while (k < n)
    {
        int a, b;
        cin >> a >> b;
        y[a].emplace_back(b);
        k++;
    }
    k = n;
    while (k > 0)
    {
        sort(y[k].begin(), y[k].end(), greater<int>());
        k--;
    }
    k = 1;
    while (k < n + 1)
    {
        for (int j = 0; j < k && j < y[k].size(); j++)
        {
            d += y[k][j];
        }
        k++;
    }
    cout << d << endl;
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