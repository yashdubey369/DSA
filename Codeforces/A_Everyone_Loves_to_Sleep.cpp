#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
 int n,h,m;
 cin>>n>>h>>m;
 int k[n];
 int a,b;
 for(int i=0;i<n;i++){
     cin>>a>>b;
     k[i]=a*60+b;
 }   
 sort(k,k+n);
 int y=h*60+m;
 if((y)==k[n-1]){
    cout<<(k[0]/60)<<" "<<(y-(k[0]%60))<<endl;
 }
 else{
 for(int i=0;i<n;i++){
    if(k[i]>y){
         cout<<(k[i]/60)<<" "<<(y-(k[i]%60))<<endl;
         break;
    }
    
 }
 }
 
}
    
}