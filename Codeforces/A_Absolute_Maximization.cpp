#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int o,a,k;
    cin>>o;
    a=o;
    for(int i=1;i<n;i++){
        cin>>k;
        o|=k;
        a&=k;
    }
    cout<<o-a<<endl;
}
    
}