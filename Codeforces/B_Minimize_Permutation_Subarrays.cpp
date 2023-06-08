#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,y=-1,d=-1,m=0;
    cin>>n;
    vector<int> a(n,0);
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]==1) y=i+1; 
        if(a[i]==2) d=i+1;
        if(a[m]<a[i]) m=i;
    }
    m+=1;
    if(y<m && d<m){
        if(y<d) {
            cout<<d<<" "<<m<<endl;
        }
        else cout<<y<<" "<<m<<endl;
    } 
    else if(y>m && d>m){
        if(y<=d) {
            cout<<y<<" "<<m<<endl;
        }
        else cout<<d<<" "<<m<<endl;
    }
    else
        cout<<n<<" "<<n<<endl;
}
    
}