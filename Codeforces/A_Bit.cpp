#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int n,x=0;
    string s;
    
    cin>>n;
    while(n--){
        cin>>s;
        if(s=="++X"||s=="X++"){
            ++x;

        }
        else{
            --x;
        }

    }
    cout<<x<<endl;
}