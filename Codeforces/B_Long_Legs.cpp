#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int a, b;
      cin >> a >> b;
      int ans = a + b;
      for (int i = 1; i < 100000; i++)
      {
         ans = min(ans, ((a + i - 1) / i + (b + i - 1) / i + (i - 1)));
      }
      cout << ans << endl;
   }
}