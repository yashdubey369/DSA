#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,sum=1;
    cin>>n;
    int a[n],b[n];
    for(auto& x:a) cin>>x;
    for(auto& x:b) cin>>x;
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++){
        int k=upper_bound(a,a+n,b[i])-a;
        int cnt=n-k-(n-1-i);
        sum=(sum%1000000007)*(cnt%1000000007)%1000000007;
        // cout<<cnt<<" ";
    }
    // cout<<endl;
    cout<<sum%1000000007<<endl;
    //  for(auto& x:a) cout<<x<<" ";
    //  cout<<endl;
    // for(auto& x:b) cout<<x<<" ";
    // cout<<endl;
    }
    
}