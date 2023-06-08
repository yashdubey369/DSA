#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
 string s;
 cin>>s;
 int cnt=0,n=s.size();
  
 for(int i=0;i<s.size()-1;i++){
    if(s[i]==s[i+1] && s[i]=='_') cnt++;
 }
 if(n==1 && s[0]=='^'){
    cnt=1;
 }
 if(s[0]=='_') cnt++;
 if(s[n-1]=='_') cnt++;
 cout<<cnt<<endl;
}
    
}