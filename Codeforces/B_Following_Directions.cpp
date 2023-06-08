#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n,cntu=0,cntr=0,flag=0;
    cin>>n;
    string s;
    cin>>s;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='U'){
            cntu++;
        }
        else if(s[i]=='D'){
            cntu--;
        }
        else if(s[i]=='R'){
            cntr++;
        }
        else{
            cntr--;
        }
        if(cntu==1&&cntr==1){
             flag=1;
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