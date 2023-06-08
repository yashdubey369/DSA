#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    for(int i=1;i<n;i++){
        a[0]=a[0]*a[i];
        a[i]=1;
    }
    for (int i =0; i < n; i++)
    {
        sum+=a[i];
    }
    cout<<2022*sum<<endl;
}
    
}