 #include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 2e5 + 5;

int n, a[N], cnt[N];
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : abs(a); }

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int tc; cin >> tc;
    while(tc--) {
        memset(cnt, 0, sizeof cnt);

        cin >> n;
        for(int i = 1; i <= n; ++i) {
            cin >> a[i]; 
            cnt[a[i]]++;
        }

        sort(a + 1, a + n + 1);

        bool ok = false;

        for(int i = 1; i <= n; ++i) {
            int g = a[i];
            cnt[a[i]]--;

            int l = 1, r = n;
            while(l <= r && !ok) {
                int mid = (l + r) / 2;

                ll gcdL = 0;
                for(int j = i - 1; j >= 1; --j) {
                    gcdL = gcd(gcdL, a[j]);
                    if(i - j == mid) break;
                }

                ll gcdR = 0;
                for(int j = i + 1; j <= n; ++j) {
                    gcdR = gcd(gcdR, a[j]);
                    if(j - i == mid) break;
                }

                if(gcd(gcdL, gcdR) <= mid) {
                    ok = true;
                } else {
                    if(mid < min(i - 1, n - i)) l = mid + 1;
                    else r = mid - 1;
                }
            }

            cnt[a[i]]++;
            if(ok) break;
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
