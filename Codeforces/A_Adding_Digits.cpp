#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int a,d;
int b,c,flag=0;
cin>>a>>b>>c;
for(int i=0;i<10;i++){
    d=a;
    d=d*10+i;
    if((d)%b==0){
        flag=1;
        break;
    }
}
if(flag==1){
cout<<d;
for(int i=0;i<c-1;i++) cout<<0;
cout<<endl;
}
else cout<<-1<<endl;
}