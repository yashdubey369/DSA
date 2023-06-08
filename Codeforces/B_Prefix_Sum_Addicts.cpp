#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
     int t;
     cin>>t;
     while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> s(k);
        for (int i = 0; i < k; i++) {
             cin >> s[i];
        }
        if (k == 1) {
            cout << "YES" << '\n';
            continue;
        }
        vector<int> d(k - 1);
        for (int i = 0; i < k - 1; i++) {
            d[i] = s[i + 1] - s[i];
        }
        if (!is_sorted(d.begin(), d.end())) {
            cout << "NO" << '\n';
            continue;
        }
        if ((n - k + 1) * d[0] >= s[0]) {
            cout << "YES" << '\n';
        } 
        else {
            cout << "NO" << '\n';
        } 
            
        }
        
         
     }
