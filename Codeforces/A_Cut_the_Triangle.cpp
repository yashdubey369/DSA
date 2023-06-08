#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
     int a,b;
     set<int> s1,s2;
     for (int i = 0; i <3; i++)
     {
      cin>>a>>b;
      s1.insert(a);
      s2.insert(b);
     }
     
     
   //   for (auto x:s1)
   //   { cout<<x<<" ";
   //      /* code */
   //   }
   //   cout<<endl;
   //   for (auto y:s2)
   //   { cout<<y<<" ";
   //      /* code */
   //   }
   //    cout<<endl;
     
     if(s1.size()<3 && s2.size()<3){
        cout<<"NO"<<endl;
     }
     else{
        cout<<"YES"<<endl;
     }
    }

}

    
    