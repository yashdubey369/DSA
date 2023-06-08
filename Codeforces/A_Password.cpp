#include<bits/stdc++.h>
using namespace std;

#define int long long int
int fac(int n){
    int cnt=1;
    for(int i=1;i<=n;i++){
        cnt*=i;
    }
    return cnt;
}

signed main(){
    int t,n,a;
    cin>>t;
    while(t--){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
    }
    cout<<((fac(10-n)/fac(8-n))*3)<<endl;


}
}