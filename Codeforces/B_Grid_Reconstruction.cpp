#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 for (int i = 1; i < 2*n; i+=2)
 {
     cout<<i<<" ";
 }
 cout<<endl;
 for (int i = 2; i <= 2*n; i+=2)
 {
     cout<<i<<" ";
 }
 cout<<endl;
}
    
}