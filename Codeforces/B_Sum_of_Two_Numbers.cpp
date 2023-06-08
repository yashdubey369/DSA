#include<bits/stdc++.h>
using namespace std;

#define int long long int
int sum(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

signed main(){
int t;
cin>>t;
while(t--){
    int n,y,d,sy=0,sd=0;
    cin>>n;
    y=n-1;
    d=1;
    sd=sum(d);
    sy=sum(y);
    if(sd>sy){
    while(abs(sd-sy)>1){
        sy++;
        y++;
        d--;
        sd--;

    }
    }
    else{
        while(abs(sd-sy)>1){
        y--;
        d++;
        sd++;
        sy--;

    }

    }
    cout <<y<<" "<<d<<endl;
    
}
}