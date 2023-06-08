#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n,flag=0;
    cin>>n;
    string s;
    cin>>s;
    map <char,int> m;
    for(int i=1;i<n;i++){
        char a=(s[i-1::i]);
        m[a]++;
    }
    for(auto x:m){
        // if(x.second>1){
        //     flag=1;
        //     break;
        // }
        cout<<x.first<<" "<<x.second<<" ";

    }
    cout<<endl;
    // if(flag==1){
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO"<<endl;
    // }
}
    
}