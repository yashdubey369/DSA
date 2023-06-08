#include<bits/stdc++.h>
using namespace std;

#define int long long int
// int mncuts(int n,int a,int b,int c){
//     if(n==0) return 0;
//     if(n<0) return -1;
//     int res= max(mncuts(n-a,a,b,c),max(mncuts(n-b,a,b,c),mncuts(n-c,a,b,c)));
//     if(res==-1) return res;
//     else return res+1;
// }
signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n,a,b,c;
cin>>n>>a>>b>>c;
int dp[n+1];
dp[0]=0;
for (int i = 1; i <=n; i++)
{
    dp[i]=-1;
    if(i-a>=0) dp[i]=max(dp[i],dp[i-a]);
    if(i-b>=0) dp[i]=max(dp[i],dp[i-b]);
    if(i-c>=0) dp[i]=max(dp[i],dp[i-c]);
    if(dp[i]!=-1) dp[i]++;
}
cout<<dp[n]<<endl;

    
}