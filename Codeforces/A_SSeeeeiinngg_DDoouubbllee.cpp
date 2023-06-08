#include<bits/stdc++.h>
using namespace std;
//#define int long long int
int main(){
     int t;
     cin>>t;
     while(t--){
         string s;
         cin>>s;
         int a=s.size();
         string s1=s;
         for(int i=0;i<a;i++){
            s1[i]=s[a-1-i];
         }
         cout<<s+s1<<endl;
    }
}
