#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,h1,h2,h3;
        cin>>n;
        for( h1=3;h1<n;h1++){
             h3=(n-h1)/2;
             h2=n-h1-h3;
            if(h3>1 && (h2+1)<h1){
                h3--;
                h2++;

            }
            if(h1>h2 && h2>h3){
                cout<<h2<<" "<<h1<<" "<<h3<<endl;
                break;
            }
        }
         
         
    }
}
    
