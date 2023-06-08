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
        int n;
        cin >> n;
        string s, k = "";
        cin >> s;
        map<string, int> m;
        for (int i = 0; i < n - 1; i++)
        {
            k = s.substr(i, 2);
            m[k]++;
        }
        cout << m.size() << endl;
    }
}