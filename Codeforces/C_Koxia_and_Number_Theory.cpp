#include<bits/stdc++.h>
using namespace std;
//CHINESE REMAINDER THEOREM AND PIGEONHOLE PRINCIPLE
#define int long long int
bool isprime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
signed main(){
int t;
cin>>t;
while(t--){
 int n,cnt=0,flag=0;
 cin>>n;
 int a;
 set<int> s;
 for(int i=0;i<n;i++){
    cin>>a;
    s.insert(a);
 }
 for(auto i:s){
    if(isprime(i)==true)cnt++;
    if(cnt==2) {
    flag=1;
    break;
    }
 }
 if(flag==1) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;

}
    
}