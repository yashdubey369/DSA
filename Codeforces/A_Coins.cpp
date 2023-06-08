#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
 
    int n,k,cnt=0;
    cin>>n>>k;
    int i=n;
    while(k>0){
        if(i<=k){
           k-=i;
           cnt++;
        }
        else i--;
    }  
    cout<<cnt<<endl; 
}
    
 