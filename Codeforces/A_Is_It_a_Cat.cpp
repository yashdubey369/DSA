#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 string s;
 cin>>s; 
 transform(s.begin(),s.end(),s.begin(),::tolower);
  s.erase(unique(s.begin(),s.end()),s.end());
  if(s=="meow") cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
    
}