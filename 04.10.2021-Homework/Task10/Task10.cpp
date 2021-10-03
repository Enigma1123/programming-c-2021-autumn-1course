#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b;
	for (int i = 0; i <= b; ++i)
	{
		c = i * i;
		if ((c >= a) and (c <= b))
		{
			cout << c << " ";
		}
	}
}