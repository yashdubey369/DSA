#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<string> s(n);
    int k[n];
    int y=INT_MAX,d=INT_MAX,m=INT_MAX,cnt01=0,cnt10=0,cnt11=0;
    for(int i=0;i<n;i++){
        cin>>k[i]>>s[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(s[i]=="11") {
            m=min(m,k[i]);
            cnt11=1;
        }
        else if(s[i]=="01"){
             y=min(y,k[i]);
             cnt01=1;
        }
        else if(s[i]=="10"){
             cnt10=1;
             d=min(d,k[i]);
        }
    }
    if(((cnt01==0 || cnt10==0 )&& cnt11==0) || ((cnt01==0 && cnt10==0 )&& cnt11==0) ) cout<<-1<<endl;
    else if(cnt01==1 && cnt10==1 && cnt11==1 ){
        if(y+d<m) cout<<y+d<<endl;
        else cout<<m<<endl;
    }
    else if((cnt01==0 || cnt10==0 )&& cnt11==1 ) cout<<m<<endl;
    else if((cnt01==1 && cnt10==1 )&& cnt11==0 ) cout<<y+d<<endl;
    
    
}
    
}