#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n,m;
cin>>n>>m;
int a[m];
for(int i=0;i<m;i++){
    cin>>a[i];
}
int ans=INT_MAX;
sort(a,a+m);
for(int i=n-1;i<m;i++){
    ans=min(ans,a[i]-a[i-n+1]);
}
cout<<ans<<endl;
    
}