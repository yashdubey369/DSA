#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        if(n==1){
            cout<<"YES"<<endl;
        }
        else{
        for(int i=1;i<n;i++){
             if(a[i-1]<a[i]){
                 cnt=1;
                continue;
               
             }
             else{
                cnt=0;
                break;
             }
    
}
if(cnt==1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
}
}