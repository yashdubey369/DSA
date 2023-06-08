#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		char d;
		string num;
		cin >> n >> d >> num;
		int i = 0;
		while (i < n && num[i] >= d)
			i++;
		num.insert(i, 1, d);
		cout << num << endl;
	}
}