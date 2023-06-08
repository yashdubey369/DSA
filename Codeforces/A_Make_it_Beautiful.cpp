#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){

int t;
cin>>t;
while(t--){
    int n,cnt=0;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];

    }
    for (int i = 1; i < n; i++)
    {
        if(a[i-1]==a[i]){
            cnt++;
        }
    }
    if(cnt==n-1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        sort(a,a+n);
        
        for (int i = 0; i<n/2; i++)
        {
            cout<<a[n-i-1]<<" "<<a[i]<<" ";
        }
         
        if(n%2!=0){
            cout<<a[n/2]<<" "<<endl;
        }
        
        
    }
    

    

}
    
}