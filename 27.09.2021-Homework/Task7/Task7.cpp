﻿#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int m = 0;
	int k = 0;
	cin >> n >> m >> k;
	if (((k % n == 0) or (k % m == 0)) and (k <= (n * m)))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
