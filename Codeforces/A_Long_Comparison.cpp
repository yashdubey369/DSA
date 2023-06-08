 #include<bits/stdc++.h>
 using namespace std;
 
 #define int long long int
 
 signed main(){
 int t;
 cin>>t;
 while(t--){
     double x1,p1,x2,p2;
     cin>>x1>>p1;
     cin>>x2>>p2;
     if((p1/x1)>(p2/x2)){
      cout<<">"<<endl;
      }
      else if((p1/x1)<(p2/x2)){
         cout<<"<"<<endl;

      }
      else{
         cout<<"="<<endl;
      }
    }
 }
    
 