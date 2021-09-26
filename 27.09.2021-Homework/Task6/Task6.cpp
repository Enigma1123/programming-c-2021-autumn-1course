#include <iostream>

using namespace std;

int main()
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	cin >> x1 >> y1 >> x2 >> y2;
	if ((x1 == x2) or (y1 == y2) or (abs(x1 - x2) == abs(y1 - y2)))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
