#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    int s1 = sqrt(a * b / c);
    int s2 = sqrt(a * c / b);
    int s3 = sqrt(b * c / a);
    cout << 4 * (s1 + s2 + s3);
}