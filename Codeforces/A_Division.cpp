#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int x;
    if(n>=1900) x=1;
    else if(n>=1600 && n<1900) x=2;
    else if(n>=1400 && n<1600) x=3;
    else x=4;
    cout<<"Division "<<x<<endl;
}
    
}