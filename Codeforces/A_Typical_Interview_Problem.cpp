#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string str="FBFFBFFBFB";
    size_t found = str.find(s);
    if (found != string::npos)
        cout <<"YES"<< endl;
    else cout<<"NO"<<endl;
}
    
}