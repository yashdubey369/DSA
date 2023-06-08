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
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i = 0; i <n; i++)
    {
        cin>>b[i];
    }

    int l=0,r=0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            r=i;
            l=i;
            break;
        }
    }
     while(l>0 && b[l-1]<=b[l]) l--;
     while (r<n-1 && b[r]<=b[r+1]) r++;
     
    cout<<l+1<<" "<<r+1<<endl;
    }
    
}