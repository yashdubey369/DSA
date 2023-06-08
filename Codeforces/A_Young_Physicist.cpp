#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int n,cx=0,cy=0,cz=0;
    cin>>n;
    int x[n],y[n],z[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i]>>z[i];
    }
    for(int i=0;i<n;i++){
        cx=cx+x[i];
        cy=cy+y[i];
        cz=cz+z[i];
    }
     
    if(cx==0 && cy==0 && cz==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}