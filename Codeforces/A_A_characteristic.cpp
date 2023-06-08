#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int i=1,flag=0;
    while(i<=n){
        if(i*(i-1)/2 + ((n-(i+1))*(n-i))/2==k){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==1){
        cout<<"YES"<<endl;
        for (int j = 0; j < i; j++)
        {
            cout<<1<<" ";
        }
        for (int j= 0; j < n-i; j++)
        {
            cout<<-1<<" ";
        }
        
    cout<<endl;    
    }
    else{
        cout<<"NO"<<endl;
    }


}
    
}