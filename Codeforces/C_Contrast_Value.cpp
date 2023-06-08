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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    n=unique(a,a+n) - a;
    int res=n;
    for(int i=1;i<n-1;i++){
        if((a[i]<a[i-1]&&a[i]>a[i+1]) ||(a[i]>a[i-1]&&a[i]<a[i+1])) res--;
    }

    cout<<res<<endl;
    


}
    
}