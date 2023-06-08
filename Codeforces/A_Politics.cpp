#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n,k,cnt=0;
    cin>>n>>k;
    string a,b;
    cin>>a;
    for (int i = 0; i <n-1; i++)
    {
        cin>>b;
        if (a==b)
        {
            cnt++;
        }
        
    }
    cout<<cnt+1<<endl;
}
    
}