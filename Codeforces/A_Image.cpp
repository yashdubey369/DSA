#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    set<char> s;
    char a;
    for(int i=0;i<4;i++){
         cin>>a;
         s.insert(a);

    }
    int n=s.size();
    cout<<n-1<<endl;
       
}
    
}