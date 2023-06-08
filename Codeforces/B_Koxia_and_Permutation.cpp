#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    if(n%2==0){
        for(int i=0;i<n/2;i++) cout<<n-i<<" "<<i+1<<" ";
    }
    else{
        for(int i=0;i<n/2;i++) cout<<n-i<<" "<<i+1<<" ";
        cout<<n/2+1;

    }
    cout<<endl;
}
    
}