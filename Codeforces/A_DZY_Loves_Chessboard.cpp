#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    char b[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if((i+j)%2==0) b[i][j]='B';
            else b[i][j]='W';
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]=='-') b[i][j]='-';
            
        }
        
    }

     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<b[i][j];
        }
        cout<<endl;
        
    }
}