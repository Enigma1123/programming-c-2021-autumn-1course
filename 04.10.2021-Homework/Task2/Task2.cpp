#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int p = 1;
	for (int i = 1; i <= n; ++i)
	{
		p = p * 2;
	}
	cout << p;
}