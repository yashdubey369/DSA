#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=0;
    for(int i=0;i<n;i++){
        ans=__gcd(ans,abs(a[i]-a[n-i-1]));
    }
    cout<<ans<<"\n";
}
    
}