#include <iostream>

using namespace std;

int main() 
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int sum = 0;
	cin >> n;
	a = n / 100;
	b = (n % 100) / 10;
	c = n % 10;
	sum = a + b + c;
	cout << sum;
}