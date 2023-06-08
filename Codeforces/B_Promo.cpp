#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int n,q;
    cin>>n>>q;
    int arr[n],prefixsum[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    prefixsum[0]=arr[0];
    
    for(int i=1;i<n+1;i++){
        prefixsum[i]=prefixsum[i-1]+arr[i];

    }
    
    for(int i=0;i<q;i++){
        int x,y;
        cin>>x>>y;
        int k;
        if(x==y){
            k=prefixsum[x-1];

        }
        else{
        k=prefixsum[x-1]-prefixsum[x-y-1] ;
    
    }
    cout<<k<<endl;
       
        
    } 
}
