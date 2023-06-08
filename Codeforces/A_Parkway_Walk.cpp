#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x,s=0;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>x;
            s+=x;
        }
        if(m>=s){
            cout<<0<<endl;
        }
        else{
           
        
        cout<<(s-m)<<endl;
    }
}
}