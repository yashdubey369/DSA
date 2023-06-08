#include<bits/stdc++.h>
using namespace std;

#define int long long int
int csal(int i){
    int mx=0,mn=10;

    while (i>0)
    {
        mx=max(mx,i%10);
        mn=min(mn,i%10);
        i/=10;
    }
    return mx-mn;

}
signed main(){
int t;
cin>>t;
while(t--){
 int a,b,mxv=-1,ans=0;
 cin>>a>>b;
 for(int i=a;i<=b;i++){
    int val;
    
    val=csal(i);
    
    if(mxv<val){
       mxv=val;
       ans=i;
    }
    if(mxv>=9) break;
    
 }  
 cout<<ans<<endl; 
}
    
}