#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
 int n,k=0,z=0;
 cin>>n;
 int a[n];
 for (int i = 0; i < n; i++)
 {
    cin>>a[i];
    if(a[i]==2){
        k++;
    }
   
 }
    if(k==0){
        cout<<1<<endl;
    }
    else if(k%2){
        cout<<-1<<endl;
    }
    else{
    int i=0;
    while(i<=n-2){
        if(a[i]==2){
            z++;
        }
        if(z==k/2){
            cout<<i+1<<endl;
            break;
        }
        i++;

    }
    }
}
    
}