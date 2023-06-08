#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
signed main()
{
    int t;
    cin >> t;
    while (t--)
    { int n;
    cin>>n;
    int k=n-4;
    double i=k;
    int m=ceil(i/3);
    int a[3]={ ( m-1),((k-m)-1),k-2*m};
    sort(a,a+3);
    //  cout<<m<<endl;
    cout<<a[0]<<endl;
        
    }
}