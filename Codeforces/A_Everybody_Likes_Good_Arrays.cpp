#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n,cnte=0,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    int i=1;
    while (i<n)
    {
        if(a[i]%2==0 && a[i-1]%2==0){
            cnte++;
        }
        else if(a[i]%2!=0 && a[i-1]%2!=0){
            cnte++;
        }
        i++;

    }
    cout<<cnte<<endl;
    
}
    
}