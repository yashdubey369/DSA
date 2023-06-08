#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
double s=0;
cin>>t;
int a[t];
for (int i = 0; i < t; i++)
{
    cin>>a[i];
    s+=a[i];
}
cout<<ceil(s/4)<<endl;

    
}