#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n,cnt=0,flag=0,c,d;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
    cin>>a[i];
    if(a[i]==0){
        flag++;
    }
    }
    if(flag==n){
    cout<<0<<endl;
    }
    else{
    for (int i = 0; i < n; i++)
    {
     if(a[i]!=0){
        c=i;
        break;
     }
     }
    for (int i = 0; i < n; i++)
    {
     if(a[n-1-i]!=0){
        d=n-i;
        break;
        }
     }
    for (int i =c; i <d; i++)
    {
         if(a[i]==0){
            cnt=1;
         }
    }
    //cout<<c<<" "<<d<<endl;
    if(cnt==0){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
   }
    }
}
    

 