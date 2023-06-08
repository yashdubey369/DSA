#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cntp=1,maxs=INT_MIN;
    for(int i=0;i<n;i++){
        if(s[i]==s[i-1]){
            cntp++;
        }
        else{
            maxs=max(maxs,cntp);
            cntp=1;
        }

    }
    maxs=max(maxs,cntp);
    cout<<maxs+1<<endl;

}
    
}