#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
 int n,k,flag=0;
 cin>>n>>k;
 string s1,s2;
 cin>>s1;
 cin>>s2;
  for(int i=k-1,j=n-1;i>0,j>n-k;i--,j--){
    if(s1[j]==s2[i]){
        flag=1;
    }
    else{
        flag=0;
        break;
    }
  }
  if(flag==1){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
}
    
}