#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end() 
 

 int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin >> n;
     string s;
     cin >> s;
     ll ans = 0;
     for (int i = 0; i < n; i++){
        int cnt[10];
        int diff = 0,max=0;
        for (int j = i;j<n; j++) {
            char c = s[j] - '0';
            if (cnt[c] == 0){
                diff++;
            }
            cnt[c]++;
            for(int i=1;i<10;i++){
                if(cnt[i-1]<cnt[i]){
                    max=cnt[i];
                }
            }
            if(  max<= diff){
                ans++;
            }
        }
     }
     cout << ans << endl;
    }
 }