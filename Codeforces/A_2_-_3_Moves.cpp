#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n==1){
        cout<<2<<endl;
    }
    else if(n==2||n==3){
        cout<<1<<endl;
    }
    else{
        if(n%3==0){
            cout<<n/3<<endl;
        }
        else{
            cout<<(n/3)+1<<endl;
        }
    }
}
    
}