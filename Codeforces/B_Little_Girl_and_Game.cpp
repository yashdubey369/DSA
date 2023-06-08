#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
string s;
cin>>s;
int cnt=0;
int n=s.size();
map<char,int> m;
for (int i = 0; i < n; i++)
{
   m[s[i]]++;
}
for(auto& x: m){
    if(x.second%2!=0) cnt++;
}
if(cnt<=1) cout<<"First"<<endl;
else if(cnt%2==0) cout<<"Second"<<endl;
else cout<<"First"<<endl;

    
}