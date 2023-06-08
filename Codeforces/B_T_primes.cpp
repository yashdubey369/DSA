#include<bits/stdc++.h>
using namespace std;

#define int long long int

void printPrimesLessThanN(int n,vector<int>& prime)
{
    vector<bool> table(n, true);

    for (int p = 2; p * p < n; p++) {
        if (table[p] == true) {
            for (int i = p * p; i < n; i += p)
                table[i] = false;
        }
    }

    for (int p = 2; p < n; p++){
        if (table[p]){
            prime.push_back(p);
        }
    }
}
signed main(){
ios::sync_with_stdio(0);
cin.tie(0);

int t;
cin>>t;
while(t--){
    int n,cnt=0;
    cin>>n;
    vector<int> prime;
    printPrimesLessThanN(n,prime);
    for (int i = 0; i <prime.size(); i++)
    {
        if(sqrt(n)==prime[i]) cnt=1;
        // cout<<prime[i]<<" ";
    }
    if(cnt) cout<<"YES"<<endl;
    // cout<<endl;
    else cout<<"NO"<<endl;
    
    
}
    
}