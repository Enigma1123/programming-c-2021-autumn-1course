#include <iostream>

using namespace std;

int main()
{
	double a = 0;
	cin >> a;
	long long* b = (long long*)&a;
	long long c = *b;
	int s = sizeof(long long) * 8;
	long long one = 1ll;
	for (int i = 1; i <= s; ++i)
	{
		long long d = ((c & (one << (s - i))) >> (s - i));
		cout << d;
		if (i % 4 == 0)
		{
			cout << " ";
		}
	}
	cout << endl;
	return 0;
}