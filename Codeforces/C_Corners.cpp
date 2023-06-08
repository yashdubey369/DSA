#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int  n,m,cnt=0,cntr=0;
    cin>>n>>m;
    string s;
   for (int i = 0; i < n; i++)
    {   cin>>s;
        int k=0;
        for (int j = 0; j < m; j++)
        {
            if(s[j]=='1') {
                cnt++;
                k++;
            }
        }
        if(k==m) cntr++;
        // cout<<s<<" ";
    }
    cout<<cnt-cntr<<endl;
       
}
    
}