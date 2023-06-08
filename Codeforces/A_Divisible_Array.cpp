#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n%2==0){
    for(int i=1;i<=n;i++){
        cout<<i*2<<" ";
    }
    }
    else {
        for(int i=1;i<=n;i++)
        cout<<i<<" ";
    }
    cout<<endl;

}
    
}