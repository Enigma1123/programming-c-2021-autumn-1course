#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int e = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> e;
		if (e > 0)
		{
			++a;
		}
		if (e == 0)
		{
			++b;
		}
		if (e < 0)
		{
			++c;
		}

	}
	cout << b << " " << a << " " << c;
}