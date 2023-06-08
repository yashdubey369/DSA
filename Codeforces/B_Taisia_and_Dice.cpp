#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n,s,r;
    cin>>n>>s>>r;
    vector<int> a;
    a.push_back(s-r);
    int k=r%(n-1);
    if(r%(n-1)==0){
        for(int i=0;i<n-1;i++){
            a.push_back(r/(n-1));
        }
    }
    else{
        for(int i=0;i<n-1;i++){
        if(k>0){
            a.push_back((r/(n-1))+1);
            k--;
        }
        else{
        cout<<r/(n-1)<<" ";
        }
    }
    }
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;
}
}
    
