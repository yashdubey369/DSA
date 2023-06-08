#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int a,b,n,m;
    cin>>a>>b>>n>>m;
    int k=n/(m+1);
    // cout<<a<<b<<n<<m<<endl;
    // cout<<k<<endl;
    cout<<k*min(a*m,b*(m+1))+(n-k*(m+1))*min(a,b)<<endl;
}
    
}