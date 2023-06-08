#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
 int n,flag=0,j=1;
 cin>>n;
 string s;
 cin>>s;
 for(int i=1;i<n;i++){
    if(s[i]=='L'&&s[i-1]=='R'){
        cout<<0<<endl;
        flag=1;
        break;
    }
    else if(s[i]=='R'&&s[i-1]=='L'){
        cout<<i<<endl;
        flag=1;
        break;
    }
 }   
 if(flag==0){
    cout<<-1<<endl;
 }
 
}
    
}