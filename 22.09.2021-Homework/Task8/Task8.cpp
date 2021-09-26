#include <iostream>

using namespace std;

int main() 
{
	int h1 = 0;
	int m1 = 0;
	int s1 = 0;
	int h2 = 0;
	int m2 = 0;
	int s2 = 0;
	int a = 0;
	cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
	a = abs((h1 * 3600 + m1 * 60 + s1) - (h2 * 3600 + m2 * 60 + s2));
	cout << a;
}