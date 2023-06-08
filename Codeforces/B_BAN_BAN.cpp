#include<bits/stdc++.h>
using namespace std;

#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        long double n;
        cin>>n;
        int l=0,cnt=0;
        int h=3*n;
        cout<<ceil(n/2)<<endl;
        for(int i=0;i<ceil(n/2);i++){
             
            cout<<l+1<<" "<<h<<endl;
            l+=3;
            h-=3;
        }
    }
}