#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int a1 = 0;
	int b1 = 0;
	int nok = 0;
	int nod = 0;
	cin >> a >> b;
	a1 = a;
	b1 = b;
	while ((a1 != 0) and (b1 != 0))
	{
		if (a1 > b1) a1 = a1 % b1;
		else  b1 = b1 % a1;
	}
	nod = a1 + b1;
	nok = (a * b) / nod;
	cout << nok;
}	