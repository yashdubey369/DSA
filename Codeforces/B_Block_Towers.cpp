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
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    sort(a+1,a+n);
    for(int i=1;i<n;i++){
        if(a[0]<a[i]){
            a[0]+=(a[i]-a[0]+1)/2;
        }
    }
    cout<<a[0]<<endl;
}
    
}