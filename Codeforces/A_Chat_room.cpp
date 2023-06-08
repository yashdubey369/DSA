#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    string s;
    cin>>s;
    char a[5]={'h','e','l','l','o'};
    int n=0;
    bool f=true;
     
    for(int i=0;i<s.size();i++){
        if(n<5){
         if(a[n]==s[i]){
            n+=1;
         }
         }
         else{
            
            break;
         }
    }
    if(n>=5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
     