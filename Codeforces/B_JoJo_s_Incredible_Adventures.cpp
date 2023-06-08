#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    s+=s;
    int cnt=0,curr=0;
    int n=s.length();
    for(int i=0;i<n-1;i++){
        if(s[i]=='1') {
            curr++;
            cnt=max(cnt,curr);
        }
        else curr=0;
    }
    if(cnt>=n) cout<<n*n<<endl;
    else {
       cnt++;
       cout<<(cnt/2)*(cnt-cnt/2)<<endl;
      }
   }
}