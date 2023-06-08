#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(auto& x:a) cin>>x;
    int k=INT_MAX,j=0;
    if(n%2==0){
        for (int i = 0; i <n; i++)
        {
            if(k>a[i]){
                k=a[i];
                j=i+1;
            }
        }
        if(j%2!=0) cout<<"Joe"<<endl;
        else cout<<"Mike"<<endl;
    }
    else cout<<"Mike"<<endl;
    // cout<<j<<endl;
}
    
}