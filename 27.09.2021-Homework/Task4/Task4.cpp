#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	if ((a == 0) and (b == 0))
	{
		cout << "INF";
	}
	else if (((c == 0) and (d == 0)) or ((a == 0) and (b != 0)) or (-b / a == -d / c) or (b % a != 0) or ((a == c) and (b == d)))
	{
		cout << "NO";
	}
	else
	{
		cout << -b / a;
	}
}