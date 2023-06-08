#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int t,n;
    cin>>t;
    while(t--){
        int cnt=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=n-1;i>=0;i--){
             if(s[i]=='Q'){
                cnt--;
             }
             else{
                cnt++;
                }
             if(cnt<0){
                cout<<"No"<<endl;
                break;
             }
            }
            if(cnt>=0){
                cout<<"Yes"<<endl;
            }
        }

}
