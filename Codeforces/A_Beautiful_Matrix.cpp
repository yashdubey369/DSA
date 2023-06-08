#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int k,l;
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }

    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==1){
               k=i;
               l=j; 
            }
        }
    }
    cout<<abs(k-2)+ abs(l-2)<<endl;
    }