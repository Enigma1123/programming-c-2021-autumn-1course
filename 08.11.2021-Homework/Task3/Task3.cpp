#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = sizeof(int) * 8;
	cin >> a;
	int z = a >> (b - 1);
	int pz = (1 + z) % 2;
	int n = ~a + 1;
	cout << n;
	return 0;
}
