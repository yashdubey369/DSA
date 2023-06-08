#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n,flag=1;
    cin>>n;
    string s;
    cin>>s;
    set<int> s1,s2;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
            if(s2.find(s[i])!=s2.end()){
                flag=0;
                break;
            }
            s1.insert(s[i]);

        }
        else{
            if(s1.find(s[i])!=s1.end()){
                flag=0;
                break;
            }
            s2.insert(s[i]);
        }
    }
    if(flag==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
}
    
}