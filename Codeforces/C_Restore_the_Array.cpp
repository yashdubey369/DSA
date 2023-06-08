#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n;
    vector<int> b(n-1);
    for (int i = 0; i < n-1; i++)
    {
        cin>>b[i];
    }
    int a[n];
    a[0]=b[0];
    a[n-1]=b[n-2];
    for(int i=0;i<n-2;i++){
        a[i+1]=min(b[i],b[i+1]);
    }
    for(auto x:a){
        cout<<x<<" ";
    }
    cout<<endl;
}
}