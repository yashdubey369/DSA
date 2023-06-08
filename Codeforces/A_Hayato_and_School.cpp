#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n,cnte=0,cnto=0,cnt=0,o=0,e=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
           cnto++;
        }
        else{
           cnte++;
        }
    }
    if(cnto>2){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            if(a[i]%2!=0){
                cout<<i+1<<" ";
                cnt++;
            }
            if(cnt==3){
                break;
            }
        }
        cout<<endl;
    }
    else if(cnto>0&&cnte>1){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            if(a[i]%2!=0 && o==0){
                cout<<i+1<<" ";
                o++;
            }
            if(a[i]%2==0){
                cout<<i+1<<" ";
                e++;
            }
            if(o==1&&e==2){
                break;
            }
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
}
}