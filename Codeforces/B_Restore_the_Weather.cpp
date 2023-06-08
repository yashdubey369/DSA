#include <iostream>
using namespace std;
#define int long long int
const int MOD = 1e9 + 7;

signed main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, k;
        cin >> n >> k;

        int y = 1;
        if (k == 1)
        {
            cout << 1 << endl;
            continue;
        }
        else if (n < k)
        {
            cout << 2 << endl;
            continue;
        }
        else
        {
            int i=0;
            while(i<k)
            {
                y = (y * (n - i)) % MOD;
                k++;
            }
            //  cout<<y<<endl;
        }
        cout << y << endl;
    }
    return 0;
}