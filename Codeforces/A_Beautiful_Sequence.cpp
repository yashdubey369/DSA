#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
 int n,flag=0;
 cin>>n;
 int a;
 for(int i=1;i<=n;i++){
    cin>>a;
    if(a<=i) {
        flag=1;
         
    }
 }
    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl; 
}
    
}