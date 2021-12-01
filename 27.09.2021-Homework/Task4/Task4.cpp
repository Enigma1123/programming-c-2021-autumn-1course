#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, c = 0, d = 0, x = 0;
	cin >> a >> b >> c >> d;
	x = -b / a;

	if (((c == 0) and (d == 0)) or (x == -d / c))
	{
		cout << "NO";
	}
	else if ((a == 0) and (b == 0))
	{
		cout << "INF";
	}
	else
	{
		cout << x;
	}


}