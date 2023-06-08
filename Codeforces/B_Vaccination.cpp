#include<bits/stdc++.h>
using namespace std;

#define int long long int
void solve()
{
    int n,k,d,w;
    cin>>n>>k>>d>>w;
    int y=0,l=1,m=0,i=0;
    while(i<n)
    {
        int a;
        cin>>a;

        if(y==0)
        {
            y=k-1;
            l=a+w+d+1;
            m++;
        }
        else if( l<=a){
             y=k-1;
            l=a+w+d+1;
            m++;
        }
        else y--;
        i++;
    }
    cout<<m<<endl;
}
signed main(){
int t;
cin>>t;
while(t--){
    solve();
}
    
}
 