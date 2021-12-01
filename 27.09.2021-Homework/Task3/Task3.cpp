#include <iostream>

using namespace std;

int main()
{
	int k = 0, m = 0, n = 0;
	cin >> k >> m >> n;
	if (k >= n)
	{
		cout << (2 * m);
	}
	else
	{
		if ((n % k) == 0) cout << (n / k) * m*2;
		else cout << ((n/k)+1)*m*2;
	}
}