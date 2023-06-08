#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int m,s;
        cin>>m>>s;
        int a[m];
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        sort(a,a+m);
        int p=0,i=1;
        if(s==1&&a[0]>2){
            cout<<"NO"<<endl;
        }
         while(s>0){
             
            if(a[p]!=i){
                s-=i;
                p--;
            }
            
          p++;
          i++;
        }
         if(s==0){
                cout<<"YES"<<endl;
                
            }

            else if(s<0){
                cout<<"NO"<<endl;
             
            }
        
    }
}