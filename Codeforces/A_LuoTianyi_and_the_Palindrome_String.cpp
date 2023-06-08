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
    int flag=1;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]!=s[i+1]) flag=0;
    }
    if(flag==0){
         cout<<s.size()-1<<endl;
    }
    else cout<<-1<<endl;
}
    
}