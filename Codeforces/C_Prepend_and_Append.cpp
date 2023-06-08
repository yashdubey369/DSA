#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    double n,flag=1;
    cin>>n;
    string s;
    cin>>s;
    int m=s.size();
    for ( int i=0;i<=n/2; i++)
    {
        if(((s[i]=='1')&&(s[n-i-1]=='0'))||((s[i]=='0')&&(s[n-i-1]=='1'))){
            m=m-2;
        }
        else{
            flag=0;
            break;
            }
    }
    if(flag==0){
        cout<<m<<endl;
    }
    else{
        cout<<0<<endl;
    }
    
}
    
}