#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,k,ans=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for (int i = 0; i <n-k; i++)
    {   int x=1;
        while(x>0){
        if(i+x*k<=n-1) a[i]=max(a[i],a[i+x*k]);
        else break;
        x++;
    }
        
    }
    for (int i = 0; i <k; i++)
    {
        ans+=a[i];
    }
    
    cout<<ans<<endl;
    

}
    
}