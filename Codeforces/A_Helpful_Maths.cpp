#include<bits/stdc++.h>
using namespace std;

//#define int long long int

signed main(){
    int aa=0;
    string s;
    cin>>s;
    vector <int> v;
    for(int i=0;i<(s.size()/2);i++){
        aa=int(s[2*i]);
        v.push_back(aa);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}