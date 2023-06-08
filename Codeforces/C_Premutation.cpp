#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n,k,y;
    cin>>n;
    int a[n][n-1];
    map<int,int> m;
    for(int i=0;i<n;i++){
        for (int j = 0; j < n-1; j++)
        {
            cin>>a[i][j];
        }
        
    }
    for(int i=0;i<n;i++){
      m[a[i][0]]++;
    }
    for(auto x:m){
        if(x.second>1){
            y=x.first;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i][0]!=y){
            k=i;
            break;
        }
    }
    cout<<y<<" ";
    for (int i = 0; i <n-1; i++)
    {
        cout<<a[k][i]<<" ";

    }
    cout<<endl;
}
    
}