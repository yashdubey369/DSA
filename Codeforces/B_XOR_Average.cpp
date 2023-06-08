#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 if(n%2!=0){
    for(int i=0;i<n;i++) cout<<3<<" ";
 }  
 else {
    cout<<1<<" "<<3<<" ";
    for(int i=2;i<n;i++) cout<<2<<" ";
 } 
 cout<<endl;
}
    
}