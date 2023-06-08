#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,s=0, ans = INT_MAX;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);

        for(int i=2;i<=n-1;i++){
            s= a[i]-a[i-2];
            ans = min(ans, s);
        }
        cout<<ans<<endl;
    }
}