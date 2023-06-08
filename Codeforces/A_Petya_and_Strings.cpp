#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    string s1,s2;
    int a=0,a1=0,a2=0;
    cin>>s1;
    cin>>s2;
    for(int i=0;i<s1.size();i++){
        
       if( s1[i]>= 'A' && s1[i]<= 'Z'){
         
        s1[i] += 32;
       }
    }
     for(int i=0;i<s1.size();i++){
        if( s2[i]>= 'A' && s2[i]<= 'Z'){
         
        s2[i] += 32;
       }
     }
    for(int i=0;i<s1.size();i++){
      

        if(s1[i]==s2[i]){
            a=0;

        }
        else if(s1[i]>s2[i]){
            a=1;
            break;
        }
        else if(s1[i]<s2[i]){
            a=-1;
            break;
        }
    }
        cout<<a;
    
     
    // if(a==0 && a1==0 && a2==0){
    //     cout<<a<<endl;
    // }
    // else if(a1==1 && a=0 && ){
    //     cout<<a1<<endl;
    // }
    // else if(a2==-1){
    //     cout<<a2;
    // }

    }