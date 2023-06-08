#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    double a,y,m=1;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==m){
            m++;
        }
    }
    y=(n-(m-1));
    cout<<ceil(y/k)<<endl;
 
    
}
    
}