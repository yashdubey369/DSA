#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    if(((a<b&&a<c)&&(d>b&&d>c))||((b<a&&b<d)&&(c>a&&c>d))||((d<b&&d<c)&&(a>b&&a>c))||((c<a&&c<d)&&(b>a&&b>d))){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
    
}