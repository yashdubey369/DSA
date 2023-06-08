#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
 int n,m,k=0,cnt=0,flag=0;
 cin>>n>>m;
 string s1,s2;
 cin>>s1>>s2;
 reverse(s2.begin(),s2.end());
 string s=s1+s2;
//  cout<<s<<endl;
for (int i = 1; i <n+m; i++)
{
    if(s[i]==s[i-1]) {
        cnt++;
        k++;
    }
    else cnt=0;
    if(cnt>1||k>1){
        flag=1;
        break;
    }
}
if(flag){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
   
}
    
}