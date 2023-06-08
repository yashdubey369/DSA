#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt1=0,cnt0=0,ct1=0,ct0=0,m1=0,m0=0,k;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                ct1++;
                cnt1++;
                cnt0=0;
                if(m1<cnt1){
                    m1=cnt1;
                }
            }
            else{
                ct0++;
                cnt1=0;
                cnt0++;
                if(m0<cnt0){
                    m0=cnt0;
                }
            }
        }
        if(m1>m0){
            k=m1*m1;
        }
        else{
            k=m0*m0;
        }
        
        if(k>ct1*ct0){
            cout<<k<<endl;
        }
        else{
            cout<<ct1*ct0<<endl;
        }
    }
}