#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
  int n, m;
    cin >> n >> m;
    vector<int> res(n, -1);
    set<int> s;
    for (int t = 1; t <= m; ++t) {
      int p;
      cin >> p;
      if (!s.count(p)) {
        s.insert(p);
        if (s.size() <= n) {
          res[n - s.size()] = t;
        }
      }
    }
    for (int x : res) cout << x << " ";
    cout << "\n";

}

    
}