#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b >> c;
	if ((a >= b + c) or (b >= a + c) or (c >= a + b) or (a <= 0) or (b <= 0) or (c <= 0))
	{
	cout << "impossible";
	}
	else if ((a * a + b * b == c * c) or (b * b + c * c == a * a) or (a * a + c * c == b * b))
	{
		cout << "right";
	}
	else if ((a * a + b * b > c * c) or (b * b + c * c > a * a) or (a * a + c * c > b * b))
	{
		cout << "acute";
	}
	else if ((a * a + b * b < c * c) or (b * b + c * c < a * a) or (a * a + c * c < b * b))
	{
		cout << "obtuse";
	}
}
