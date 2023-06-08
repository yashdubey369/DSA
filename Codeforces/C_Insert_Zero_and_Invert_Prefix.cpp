#include <bits/stdc++.h>
using namespace std;

#define int long long int
void yash()
{
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m = 0;
        cin >> n;
        vector<int> d, y(n);
        d.reserve(n);
        for (int i = 0; i < n; i++)
            cin >> y[i];
        int i = 0;
        while (i < n)
        {
            m = 0;
            int j = 0;
            while (j < y.size())
            {
                if (y[j] == 1)
                {
                    y[j] = 0;
                }
                else
                {
                    m = 1;
                    d.push_back(j);
                    y.erase(y.begin() + j);
                    break;
                }
                j++;
            }
            if (m == 0)
            {
                cout << "NO" << endl;
                break;
            }
            i++;
        }
        if (m == 0)
            continue;
        cout << "YES" << endl;
        // reverse(d.begin(), d.end());
        for (int i=n-1;i>=0;i--)
        {
            cout << d[i] << " ";
        }
        cout << endl;
    }
}