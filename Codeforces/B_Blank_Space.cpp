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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=0,ans=0;

    for(int i=0;i<n;i++){
        if(a[i]==0) {
            cnt++;
            ans=max(ans,cnt);
            }
        else cnt=0;
       
    }
    cout<<ans<<endl;
}
    
}