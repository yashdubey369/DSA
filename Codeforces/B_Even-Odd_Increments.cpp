#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,q,ty,x,cnt=0,cnte=0,cnto=0;
        cin>>n>>q;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            cnt+=a[i];
             if(a[i]%2==0){
                cnte++;
             }
             else{
                cnto++;
             }
        }

        for(int i=0;i<q;i++){
          cin>>ty>>x;
          if(ty==0){
            cnt+=x*cnte;
            if(x%2!=0){
                cnto+=cnte;
            cnte=0;
          }
          }
          else{
            cnt+=x*cnto;
            if(x%2!=0){
                cnte+=cnto;
                cnto=0;
            }
          }
        cout<<cnt<<endl;
        }
    }
}
     