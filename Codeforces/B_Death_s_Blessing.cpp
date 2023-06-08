#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,cnt=0;
        cin>>a;
        int a1[a],a2[a];
        for (int i=0;i<a;i++){
            cin>>a1[i];
        }
        for(int i=0;i<a;i++){
            cin>>a2[i];
        }
        sort(a1,a1+a);
        sort(a2,a2+a);
        for(int i=0;i<a;i++){
            cnt+=a1[i];
        }
        for(int i=0;i<(a-1);i++){
            cnt+=a2[i];
        }
        cout<<cnt<<endl;
    }
}