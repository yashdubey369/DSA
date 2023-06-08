#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
     int t;
     cin>>t;

    while (t--)
    {
         string n;
         cin>>n;
         int l=n.size(),a=stoi(n)%10,cnt=0;
         for(int i=1;i<l+1;i++){
            cnt+=i;
         }
         cout<<(a-1)*10+cnt<<endl;
         

    }
    
    
}