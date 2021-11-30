#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int k = 0;
	int c = 0;
	int f1 = 1;
	int f2 = 1;
	int f3 = 1;
	cin >> n >> k;
	for (int i = 1; i <= n; ++i)
	{
		f1 = f1 * i;

	}
	for (int i = 1; i <= k; ++i)
	{
		f2 = f2 * i;

	}
	for (int i = 1; i <= (n - k); ++i)
	{
		f3 = f3 * i;

	}
	c = f1 / (f2 * f3);
	cout << c;

}