#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
vector<char> v;
queue<char> st;
// st.push(s[0]);
// cout<<st.top()<<" ";
for (int i = 0; i < n; i++)
{        
       if(st.front()==s[i]){
        // cout<<st.front()<<" "<<s[i]<<" ";

        v.push_back(s[i]);
        while(!st.empty()){
            st.pop();
        }
          continue;
    }
    st.push(s[i]);
    // cout<<st.front()<<" "<<s[i]<<" ";
    }
    for(auto i:v) cout<<i;
    cout<<endl;
}



}
    
