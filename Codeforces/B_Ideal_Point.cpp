#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n,k,l,r,y=0,a=50;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>l>>r;
        if(l<=k&&r>=k){
        y=max(y,l);
        a=min(a,r);
        }
    }
    if(y==a)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
    
}