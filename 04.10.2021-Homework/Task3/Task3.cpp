#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int i = 1;
	int a = 1;
	cin >> n;
	while (a <= n) 
	{
		for (int j = 1; j <= i; ++j) 
		{
			if (a <= n)
			{
				cout << a;
			}
			a++;
		}
		cout << endl;
		++i;

	}
}