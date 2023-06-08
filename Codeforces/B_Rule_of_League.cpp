#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
 int n,x,y;
 cin>>n>>x>>y;
 if(min(x,y)==0 && max(x,y)>0 && (n-1)%max(x,y)==0){
    int k;
     for(int i=2;i<=n;i){
        
        for(k=0;k<max(x,y);k++){
            cout<<i<<" ";
            
        }
        i+=max(x,y);

    }
    cout<<endl;
 }
 else cout<<-1<<endl;   
}
    
}