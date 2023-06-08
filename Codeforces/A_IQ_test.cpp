#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t,ce=0,co=0;
cin>>t;
int a[t];
for (int i = 0; i < t; i++)
{
    cin>>a[i];
    if (a[i]%2==0)
    {
      ce++;
    }
    else{
      co++;
    }
    
}
if(ce>co){
  for (int i = 0; i < t; i++)
  {
    if(a[i]%2!=0){
      cout<<i+1<<endl;
      break;
    }
  }
  
}
else{
  for (int i = 0; i < t; i++)
  {
    if(a[i]%2==0){
      cout<<i+1<<endl;
      break;
    }
  }
  
}

}