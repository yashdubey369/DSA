#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,x;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            sum+=x;
        }
        cout<<abs(sum)<<endl;
    }
}