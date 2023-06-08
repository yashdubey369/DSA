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
        int a[n];
        vector<int> e, o;
        for (auto &x : a)
        {
            cin >> x;
            if (x % 2 == 0)
                e.push_back(x);
            else
                o.push_back(x);
        }
        sort(o.begin(), o.end());
        sort(e.begin(), e.end());
        if (o.size() == n || e.size() == n)
            cout << "YES" << endl;
        // else if((o.size()>e.size() && o[0]>e[e.size()-1])||(o.size()<e.size() && o[o.size()-1]<e[0])) cout<<"YES"<<endl;
        else if (e[0] > o[0])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}