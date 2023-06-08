#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define pi (3.141592653589)
#define M 1000000007
#define pb push_back
#define f first
#define s second
#define sz(s) (int)(s.size())
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define all(x) x.begin(), x.end()
#define out(x) cout << x << endl;
#define mxall(x) *max_element(all(x))
#define mnall(x) *min_element(all(x))
#define add(x) accumulate(all(x), 0LL)
// #define l1(i,j,n) for(int i=j;i<n;i++)
#define l(x,a) for(auto& x: a)
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define pm cout<<"-1"<<endl

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,ans=0;
    cin>>n;
    int a[n];
    set<int> s;
    l(x,a) {
        cin>>x;
     }
    for (int i = n-1; i >=0; i--)
    {
        if(s.find(a[i])==s.end()) s.insert(a[i]);
        else{
            ans=i+1;
            break;
        }
        // cout<<a[i]<<" ";
    }
    // l(x,s) cout<<x<<" ";
    cout<<ans<<endl;
    
    
}
    
}