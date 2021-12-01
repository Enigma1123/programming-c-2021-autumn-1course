#include <iostream>

using namespace std;

int main()
{
	int a[100000];
	int n = 0;
	int m = 0;
	int x = 0;
	cin >> n;
	cin >> m;
	for (int i = 1; i <= n; ++i)
	{
		cin >> x;
		a[x] = 1;
	}
	for (int i = 1; i <= m; ++i)
	{
		cin >> x;
		if (a[x] == 1) a[x] = 2;
	}
	for (int i = 1; i <= 100000; i++)
	{
		if (a[i] == 2) cout << i << " ";
	}
	return 0;
}

