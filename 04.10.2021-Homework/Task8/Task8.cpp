#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int a = 0;
	int sum = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a;
		sum = sum + a;
	}
	cout << sum;
}