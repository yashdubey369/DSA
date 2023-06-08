#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
int n,q,k,cnt=0,ans=0,max=0;
 cin>>n>>k>>q;
 int a[n];
 vector<int> b;
 for(int i=0;i<n;i++) cin>>a[i];
 for(int i=0;i<n;i++){
    if(a[i]>q) {
        cnt=0;
     }
    else {
        cnt++;
    }
    b.push_back(cnt);
 }
 for(auto i:b){
    int y=i-k;
    if(i>=q) ans+=y+1;
 }
cout<<ans<<endl;
}
    
}