#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main()
{
    string s;
    cin >> s;
    int n = s.size(), k, cnt = 0, flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            flag = 1;
            k = i;
            break;
        }
    }
    for (int i = k; i < n; i++)
    {
        if (s[i] == '0')
            cnt++;
    }

    if (cnt >= 6 && flag == 1)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}