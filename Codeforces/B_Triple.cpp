#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
 int n,flag=0,k;
 cin>>n;
 int a;
 map<int,int> m;
 for(int i=0;i<n;i++){
    cin>>a;
    m[a]++;
 }   
 for(auto i:m){
    if(i.second>2){
        k=i.first;
        flag=1;
        break;
    }
 }
 if(flag==1){
    cout<<k<<endl;
 }
 else{
    cout<<-1<<endl;
 }

}
    
}