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
         
        
        for (int i=0;i<n-1;i++){
            if(a[i]==1 && a[i]!=a[i+1]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}