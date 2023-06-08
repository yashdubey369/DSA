#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n , k , b, s;
        cin >> n >> k >> b >> s;
        long long sum =  s-(k*b);
        if(sum<0 || sum> (k-1)*n)
        {
            cout << -1 << '\n';
        }
        else
        {
            n--;
            while(n--)
            {
                if(sum>0)
                {
                    long long a = min(sum, k-1);
                    sum-=a;
                    cout << a << " ";
                }
                else
                {
                    cout << 0 << " ";
                }
            }
            cout << (k*b)+sum << '\n';
        }
    }
    return 0;
}