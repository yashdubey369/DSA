#include<iostream>
#include<cmath>
using namespace std;

#define int long long int

signed main(){
    
long double n,m,a;
cin>>n>>m>>a;

int f1=ceil(n/a);
int f2=ceil(m/a);
cout<<f1*f2<<endl;

}