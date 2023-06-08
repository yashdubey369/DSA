#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n,a,sume=0,sumo=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a%2==0){
             sume+=a;
        }
        else sumo+=a;;
    }
    // cout<<sume<<" "<<sumo<<endl;
    if(sume>sumo) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
    
}