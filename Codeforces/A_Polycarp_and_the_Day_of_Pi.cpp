#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int cnt=0;
     
    string s;
    string a="314159265358979323846264338327";
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]==a[i]){
            cnt++;
        }
        else{
            break;
        }
    }
    cout<<cnt<<endl;
}
    
}