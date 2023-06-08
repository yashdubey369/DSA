#include<bits/stdc++.h>
using namespace std;

#define int long long int
void solve(){
 int n;
 cin>>n;
 int y;
 int count=0;
 for(int i=0;i<n;i++){
    cin>>y;
    if(y==1){
        count++;
    }
 }
cout<<n-count/2<<endl;
    
}
signed main(){
int t;
cin>>t;
while(t--){
  solve();
    
}
}