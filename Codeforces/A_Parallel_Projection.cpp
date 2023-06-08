#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int w,d,h;
    cin>>w>>d>>h;
    int a,b,f,g;
    cin>>a>>b>>f>>g;
    int j,k,l,m,y,s;
    y=abs(a-f);
    s=abs(b-g);
    j=h+b+g+y;
    k=h+(d-g)+(d-b)+y;
    l=h+f+a+s;
    m=h+(w-f)+(w-a)+s;
    int an=min(j,k);
    int an2=min(l,m);
    int ans=min(an,an2);
    cout<<ans<<endl;

}
    
}