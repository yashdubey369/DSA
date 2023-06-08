#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n,k,i,ans;
cin>>n>>k;
if(n%2!=0){
    if(k>(n/2+1)){
        ans=2;
       for(i=1;i<k-(n/2+1);i++) {
               ans+=2;     
    }
    }
    else {
        ans=1;
          for(i=1;i<k;i++){
            ans+=2;
          }
    }
}
else {
    if(k>n/2){ 
        ans=2;
         for(i=2;i<=k-(n/2);i++){
        ans+=2;
         }
    }
    else{
        ans=1;
         for(i=1;i<k;i++){
            ans+=2;
         }
    }
}
cout<<ans<<endl;
}