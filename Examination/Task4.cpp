#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int max = 0;
	int min = 0;
	cin >> n;
	int* a = new int[n] {0};
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	max = a[0];
	min = a[0];
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == max) a[i]=min;
		cout << a[i] << " ";
	}
	delete[] a;
	a = 0;
	return 0;
}