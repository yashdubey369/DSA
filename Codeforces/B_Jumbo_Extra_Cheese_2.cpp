#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    
    int t;
    cin >> t;
    while (t--)
    {   int n;
        cin >> n;
        int s= 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            s+= (2*min(a, b));
            v.push_back(max(a, b));
        }
        sort(v.begin(),v.end());
        s+= v[0];
        s+= v[v.size() - 1];
        for (int i = 1; i < v.size(); i++)
        {
            s += v[i] - v[i - 1];
        }
        cout << s << endl;
    }
}
