#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
 
    int n,prefix=0,maxsum=INT_MIN,cnt=0;
    cin>>n;
    int a[n];
    for(auto& x:a) {
        cin>>x;
        cnt+=x;
        if(x==0) prefix++;
        else prefix--;
        maxsum=max(maxsum,prefix);
        if(prefix<0) prefix=0;
        
    }
    cout<<maxsum+cnt<<endl;
}