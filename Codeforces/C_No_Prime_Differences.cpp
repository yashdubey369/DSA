#include <bits/stdc++.h>
using namespace std;

#define int long long int
void yash()
{
    int a, b;
    cin >> a >> b;
    int y = (2 * b) + 1;
    for (y; y < a * b; y + 2 * b)
    {
        for (int i = 0; i < b; i++)
            cout << y + i << " ";
        cout << endl;
        y += 2 * b;
    }
    int k=1;
    while(k<b+1){
        cout<<k<<" ";
        k++;
    }
    cout << endl;
    for (int i = 3 * b + 1; i <= 4 * b; i++)
        cout << i << " ";
    cout << endl;
    for (y = b + 1; y < a * b + 1; y)
    {
        if (y == 3 * b + 1)
        {
            y += 2 * b;
            continue;
        }
        for (int i = 0; i < b; i++)
            cout << y + i << " ";
        cout << endl;
        y += 2 * b;
    }
    cout << endl;
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