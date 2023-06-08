#include<bits/stdc++.h>
using namespace std;

//#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string a="";
    string s;
    cin>>s;
    int cnt=0;
    if(s[0]=='1'){
        cnt=1;
    }
    for(int i=1;i<n;i++){
        if(cnt==0){
            //cout<<'[';
            if(s[i]=='1'){
                cnt=1;
              //  cout<<',';
            }
            a+='+';
        }
        else if(cnt==1)
        {
            if(s[i]=='0'){
                a+='+';
                //cout<<'/';
            }
            else{
                //cout<<'.';
                cnt=0;
                a+='-';
            }
        }
    }
    for (int i = 0; i < n-1; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    
}
    
}