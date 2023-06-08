#include<bits/stdc++.h>
using namespace std;

//#define int long long int

signed main(){
    int n;
    cin>>n;
    int h,m,cnt=0,a1=0,f=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>h>>m;
        a[i]=(h*60)+m;
    
    }
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            cnt++;
            if(cnt>f){
            f=cnt;
        }
        }
        else{
            cnt=0;
            a1=1;
        }
    }
    cout<<f+1;
}