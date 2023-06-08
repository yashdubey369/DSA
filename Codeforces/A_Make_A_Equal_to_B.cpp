#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,a1=0,a2=0,an=0,ans=0;
        cin>>n;
        int s1[n],s2[n];
        for(int i=0;i<n;i++){
            cin>>s1[i];
            a1+=s1[i];
        }
        for(int i=0;i<n;i++){
            cin>>s2[i];
            a2+=s2[i];
        }
        for(int i=0;i<n;i++){
            an+=s1[i]^s2[i];
        }
        ans=min(an,1+abs(a1-a2));
        cout<<ans<<endl;

        
}
}