#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n,cnt=0,flag=1;
    cin>>n;
    string s;
    cin>>s;
    
    for(int i=0;i<n;i++){
        if(i%3==1){
            if(s[i]!=s[i+1]){
                flag=0;
            }
        }
    }
    if(flag==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    }

}


     

