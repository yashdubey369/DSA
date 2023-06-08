#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
long double n,m,k,l;
cin>>n>>m>>k>>l;
int y=ceil((l+k)/m);
if(y*m>n) cout<<-1<<endl;
else cout<<y<<endl;
}