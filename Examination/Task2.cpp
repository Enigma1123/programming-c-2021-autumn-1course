#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int min = 0;
	int max = 0;
	int sum = 0;
	int i = 2;
	cin >> min >> max;
	while // Не знаю как сделать так чтобы останавливать прием чисел
	{
		i++;
		if (i % 2 == 0)
		{
			if (a < min) min = a;
		}
		else if (a > max) max = a;
	}
	sum = min + max;
	cout << sum; 
}