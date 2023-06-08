#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    sort(a,a+n);
    if(a[0]==a[n-1]){
     cout<<n*(n-1)<<endl;
    }
    else{
    cout<<2*m[a[0]]*m[a[n-1]]<<endl;
    }
}
    
}