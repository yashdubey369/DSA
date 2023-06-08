 #include<bits/stdc++.h>
using namespace std;
 
#define int long long int
 
signed main(){
    int t;
    cin>>t;
    char a[8][8];
    int cntr=0,c=0;
    while(t--){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(a[i][j]=='B'){
                c=0;
            }
            else{
                cntr++;
                
                }
                if(cntr==8){
                    c=1;
                    break;
                }
                 
             }
              
        cntr=0;
        if(c==1){
            break;
        }     
        
    }
 
    if(c==1){
        cout<<'R'<<endl;
    }
    else{
        cout<<'B'<<endl;
    }
    }
}
