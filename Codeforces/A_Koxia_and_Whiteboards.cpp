#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int a[n],b;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<k;i++){
        cin>>b;
        a[0]=b;
        sort(a,a+n);
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    cout<<sum<<endl;
}
    
}