#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int len1=s1.size(),len2=s2.size();
        char a,c;
         a=s1[len1-1];
         c=s2[len2-1];
         if(a==c && a=='S'){
            if(len1>len2){
                cout<<"<"<<endl;
            }
            else if(len1<len2){
                cout<<">"<<endl;
            }
            else{
                cout<<"="<<endl;
            }

         }
          else if(a==c && a=='L'){
            if(len1>len2){
                cout<<">"<<endl;
            }
            else if(len1<len2){
                cout<<"<"<<endl;
            }
            else{
                cout<<"="<<endl;
            }
         }
         else if(a=='S'&& c=='L'){
            cout<<"<"<<endl;
         }
         else if(a=='S'&& c=='M'){
            cout<<"<"<<endl;
         }

         else if(a=='L'&& c=='S'){
            cout<<">"<<endl;
         }
         else if(a=='L'&& c=='M'){
            cout<<">"<<endl;
         }
         else if(a=='M'&& c=='S'){
            cout<<">"<<endl;
         }
         else if(a=='M'&& c=='L'){
            cout<<"<"<<endl;
         }
        else if(a=='M'&& c=='M'){
            cout<<"="<<endl;
         }
         
    }
}