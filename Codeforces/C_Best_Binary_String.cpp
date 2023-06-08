#include <bits/stdc++.h>
using namespace std;

#define int long long int
void yash()
{
    string d;
    cin >> d;
    char y = '0';
    int k = 0;
    while (k < d.size())
    {
        if (d[k] != '?')
            y=d[k];
        else
            d[k]=y;
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