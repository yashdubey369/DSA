#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        int n;
        string s;
        cin>>n;
        cin>>s;
        sort(s.begin(),s.end());
        for(int i=0;i<26;i++){
            if(s[n-1]==a[i]){
                cout<<i+1<<endl;
                break;
            }
        }


    }
}