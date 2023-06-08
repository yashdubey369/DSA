#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int a=(n+k-1)/k;
    cout<<(k*a+n-1)/n<<endl;
    }
}
    
