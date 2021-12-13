#include <iostream>

using namespace std;

int main()
{
	int M = 0;
	int	N = 0;
	int	x = 0;
	int	y = 0;
	cin >> M;
	cin >> N;
	cin >> x;
	cin >> y;
	if (x > 1)
	{
		cout << x - 1 << " " << y << endl;
	}
	if (x < N)
	{
		cout << x + 1 << " " << y << endl;
	}
	if (y > 1)
	{
		cout << x << " " << y - 1 << endl;
	}
	if (y < M)
	{
		cout << x << " " << y + 1 << endl;
	}

}