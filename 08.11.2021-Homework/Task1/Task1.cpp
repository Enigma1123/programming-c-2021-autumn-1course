#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	int bit_b = (a & (1 << b)) >> b;
	int bit_c = (a & (1 << c)) >> c;
	a = a & (~(1 << b));
	a = a & (~(1 << c));
	a = a | (bit_b << c) | (bit_c << b);
	cout << a;
	return 0;
}
