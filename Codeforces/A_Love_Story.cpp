#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
 string s="codeforces";
 string y;
 int cnt=0;
 cin>>y;
 for(int i=0;i<y.size();i++){
    if(s[i]!=y[i]) cnt++;
 }   
 cout<<cnt<<endl;
}
    
}