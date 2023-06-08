#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
 int j,l;
 cin>>j>>l;
if(log2(j)>=l) cout<<(int)pow(2,l)<<endl;
 else  cout<<j+1<<endl;
}
    
}