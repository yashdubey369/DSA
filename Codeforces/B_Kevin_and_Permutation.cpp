#include<bits/stdc++.h>
using namespace std;

//#define int long long int   
 int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a,k;
        a=n/2;
        k=n;
        if(n%2==1){
            a++;
            }
        while(a!=0){
            if(a==1 && n%2==1){
                cout<<1;
                break;
            }
            cout<<a<<" "<<k<<" ";
            a--;
            k--;
        }
        cout<<endl;
    }
    return 0;
}