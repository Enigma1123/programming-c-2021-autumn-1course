#include <iostream>

using namespace std;

int main() 
{
	int x = 0;
	int x2 = 0;
	cin >> x;
	x2 = x * x;
	x = (x2 + x) * x2 + x2 + x + 1;
	cout << x;
}