#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n],sum=0 ,ans=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%2==0){
        cout<<0<<endl;
    }
    else{
        for (int i = 0; i <n; i++)
        {
           int cnt=0;
            if(a[i]%2!=0){
               while(a[i]%2!=0){
                a[i]=a[i]/2;
                cnt++;
            }
            }
            else{
                while(a[i]%2==0){
                a[i]=a[i]/2;
                cnt++;
            }

            }
            ans=min(ans,cnt);
            
        }
        cout<<ans<<endl;
    }

}
    
}