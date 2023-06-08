#include<bits/stdc++.h>
using namespace std;

#define int long long int
void solve(){
     int d,f;
    cin>>d>>f;
    int y,k,j,n,m;
    k=max(abs(d),abs(f));
    m=max(abs(d),abs(f));
    n=min(abs(d),abs(f));
    j=max(m-1,n);
    y=k+j;
    cout<<y<<endl;
}
signed main(){
int t;
cin>>t;
while(t--){
   solve();
}
    
}