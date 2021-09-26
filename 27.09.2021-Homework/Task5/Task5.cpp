#include <iostream>

using namespace std; 

int main()
{
	int k = 0;
	cin >> k;
	if ((k % 4 == 0) or (k == 1))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}