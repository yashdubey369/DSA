#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,min=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int a2[n];
        for(int i=0;i<n;i++){
            a2[i]=a[i];
        }
        sort(a2,a2+n);
         
 
        if(a2[0]==a[0]){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
}