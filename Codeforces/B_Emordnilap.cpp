#include<bits/stdc++.h>
using namespace std;

#define int long long int
int solve(int a,int n){
    int i=1;
     while (i<n+1)
     {
         a=(a*i)%1000000007;
         i++;
    }
    return a;

}

signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int ans=n*(n-1);
    int a=solve(ans,n);
    cout<<a<<endl;
}
    
}