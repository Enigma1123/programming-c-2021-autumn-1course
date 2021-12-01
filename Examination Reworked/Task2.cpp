#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int min = 0;
	int max = 0;
	int sum = 0;
	int i = 2;
	cin >> min >> max;
	while (cin >> a)
	{
		i++;
		if (i % 2 == 0)
		{
			if (a > max) max = a;
		}
		else if (a < min) min = a;
	}
	sum = min + max;
	cout << sum;
}