#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int x = 0;
	cin >> a >> b >> c >> d;
	x = -b / a;

	if  (((c == 0) and (d == 0))or(x==-d/c))
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
//(ax + b) : (cx + d) = 0.
