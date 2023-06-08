#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int k,n;
    cin>>k>>n;
    int a[k];
    int l=1,h=n;
    while(l<=h)
    {
        a[l-1]=l;
        a[h-1]=h;
       
        l++;
        h--;
    }
    for (int i = 0; i < k; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    
}
    
}