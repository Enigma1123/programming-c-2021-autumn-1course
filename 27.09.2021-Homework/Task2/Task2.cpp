#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	if (((n % 4 == 00) and (n % 100 != 0)) or (n % 400 == 0))
		{
		cout << "YES";
		}
	else
		{
		cout << "NO";
		};

}