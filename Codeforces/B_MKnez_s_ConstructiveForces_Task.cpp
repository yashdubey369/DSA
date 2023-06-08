#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n==3){
            cout<<"NO"<<endl;
        }
    else {
        if(n%2!=0){
        int k=n/2;
        int i=0;
        cout<<"YES"<<endl;
        while(i<n/2){
            cout<<1-k<<" "<<k<<" ";
            i++;
        }
        cout<<1-k<<endl;    
        
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n/2;i++){
                cout<<-n<<" "<<n<<" ";
            }
            cout<<endl;
        }
    }
}
    
}