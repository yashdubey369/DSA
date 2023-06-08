#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int res=a[0];
    for (int i = 0; i < n-1; i++)
    {
        res=max(res,a[i+1]-a[i]);
    }
    cout<<res<<endl;
    
    
}
    
}