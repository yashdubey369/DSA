#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 if(n==1){
 cout<<1<<endl;
 continue;
 }
 int k=n;
 if(n%2==0){
    for(int i=1;i<=n/2;i++,k-=2) cout<<k-1<<" "<<k<<" ";
    cout<<endl;
 }  
 else cout<<-1<<endl; 
}
    
}