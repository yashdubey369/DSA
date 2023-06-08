#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k=0;
        cin>>s;
        char a[3]{'Y','E','S'};
        for(int i=0;i<3;i++){
            if(toupper(s[i])==a[i]){
                k++;
                 
            }
            else{
                k=0; 
            }
        }
        if(k==3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}