 #include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
int t;
cin>>t;
while(t--){
      int n, k, b, s;
	cin >> n >> k >> b >> s;
	int x=b*k;  
	if (x > s) {
		cout << -1 << endl;
	}
	if (s - x > n * (k - 1)) {
		cout << -1 << endl;
	}
	
	int a[n];
	memset(a, 0, sizeof a);
	a[0] = b;
	
	int sum = s - x;
	
	for (int i=0; i<n; i++) {
		int v = min(sum, k - 1);
		a[i] += v;
		sum -= v;
	}
	for (int i=0; i<n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
 
}
        
        
}
    
