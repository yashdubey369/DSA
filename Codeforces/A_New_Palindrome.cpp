#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
 string s;
 cin>>s;
 int cnt=0;
 map<char,int> m;
 for(int i=0;i<s.size();i++){
    m[s[i]]++;
 }   
 for(auto i:m){
    if(i.second>=2) {
        cnt++;
    }
 }
 
 if(cnt>=2) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
}
}
