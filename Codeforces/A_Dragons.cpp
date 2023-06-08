#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n,s,flag=0;
cin>>s>>n;
vector<pair<int,int>> v(n);
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    v[i]=make_pair(x,y);
}
sort(v.begin(),v.end());
for (int i = 0; i < n; i++)
{
     if(s>v[i].first){
        s+=v[i].second;
        flag=1;
     }
     else{
        flag=0;
        break;
     }
    // cout<<v[i].first<<" "<<v[i].second<<endl;
}
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
// cout<<endl;

    
}