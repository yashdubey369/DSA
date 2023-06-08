#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int sum=(4*n)-1,y=n,k=n+1,a=4;
    for (int i = 2; i < a; i++)
    {
        if(sum%i==0){
        sum=sum/i;
    }

        else if(k%i==0){
        k=k/i;
    }
        else{
        y=y/i; 
    }
    
    
    }
    sum=(((((sum*y)%1000000007)*k)%1000000007)*2022)%1000000007;
    cout<<sum<<endl;
}
    
}