#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
int i=0;
int a[t];
while (i<t)
{
    cin>>a[i];
    i++;
}
int l=-1,r=-1;
for (int i = 0; i <t-1; i++)
{
    if(a[i]<a[i+1]) continue;
    else {
        l=i;
        break;
    }
}
for(int i=t-1;i>0;i--){
    if(a[i]>a[i-1]) continue;
    else{
        r=i;
        break;
    }
}
i=l;
int j=r;
while(i<j){
    swap(a[i],a[j]);
    i++;
    j--;
}
// cout<<l<<" "<<r<<endl;
int flag=1;
for(int i=0;i<t-1;i++){
    if(a[i]<a[i+1]) {
        continue;
    }
    else {
        flag=0;
        break;
        }
    // cout<<a[i]<<" ";
}
// cout<<endl;
if(l==-1 && r==-1) {
    cout<<"yes"<<endl;
    cout<<l+2<<" "<<r+2<<endl;
    }
else if(flag==0) cout<<"no"<<endl;
else {
    cout<<"yes"<<endl;
    cout<<l+1<<" "<<r+1<<endl;
}



    
}