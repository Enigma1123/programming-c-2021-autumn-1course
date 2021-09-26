#include <iostream>

using namespace std;

int main()
{
	int k = 0;
	int m = 0;
	int n = 0;
	cin >> k >> m >> n;
	if (k >= n)
	{
		cout << (2 * m);
	}
	else
	{
		cout << (2 * m) * ((n / k)+1);
	}
}
