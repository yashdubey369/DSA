#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int a,max=0;
    cin>>a;
    map<int,int> m;
    for (int i = 0; i < 4; i++)
    {
        m[a%10]++;
        a=a/10;
    }
    for(auto i:m){
        if(max<i.second) max=i.second;
    }
    if(max==1) cout<<4<<endl;
    else if(max==2) cout<<4<<endl;
    else if(max==3) cout<<6<<endl;
    else cout<<-1<<endl;
    
}
    
}