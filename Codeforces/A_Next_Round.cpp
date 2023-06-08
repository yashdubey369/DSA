#include<bits/stdc++.h>
using namespace std;

// #define int long long int

int main(){
   long long  int n, cnt=0,k;
   
    cin>>n>>k;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];

    }
    for(int i=1;i<=n;i++){
          if(a[i]>=a[k]&& a[i]>0){
            cnt++;
        }

    }
    cout<<cnt<<endl;
    return 0;
}