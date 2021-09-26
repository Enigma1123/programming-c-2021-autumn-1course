#include <iostream>

#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 0;
	int a = 0;
	int b = 0; 
	int c = 0;
	cin >> n;
	a = n / 100;
	b = (n % 100) / 10;
	c = n % 10;
	switch (a)
	{
	case 1:
		cout << "Сто ";
		break;
	case 2:
		cout << "Двести ";
		break;
	case 3:
		cout << "Триста ";
		break;
	case 4:
		cout << "Четыреста ";
		break;
	case 5:
		cout << "Пятьсот ";
		break;
	case 6:
		cout << "Шестьсот ";
		break;
	case 7:
		cout << "Семьсот ";
		break;
	case 8:
		cout << "Восемьсот ";
		break;
	case 9:
		cout << "Девятьсот ";
		break;
	}
	switch (b)
	{
	case 1:
		switch (c)
		{
		case 1:
			cout << "Одиннадцать ";
			break;
		case 2:
			cout << "Двенадцать ";
			break;
		case 3:
			cout << "Тринадцать ";
			break;
		case 4:
			cout << "Четырнадцать ";
			break;
		case 5:
			cout << "Пятнадцать ";
			break;
		case 6:
			cout << "Шестнадцать ";
			break;
		case 7:
			cout << "Семнадцать ";
			break;
		case 8:
			cout << "Восемнадцать ";
			break;
		case 9:
			cout << "Девятнадцать ";
			break;
		case 0:
			cout << "Десять ";

		}
		cout << "Бананов";
		return 0;
	case 2:
		cout << "Двадцать ";
		break;
	case 3:
		cout << "Тридцать ";
		break;
	case 4:
		cout << "Сорок ";
		break;
	case 5:
		cout << "Пятьдесят ";
		break;
	case 6:
		cout << "Шестьдесят ";
		break;
	case 7:
		cout << "Семьдесят ";
		break;
	case 8:
		cout << "Восемьдесят ";
		break;
	case 9:
		cout << "Девяносто ";
		break;
	}
	switch (c)
	{
	case 1:
		cout << "Один Банан";
		break;
	case 2:
		cout << "Два Банана";
		break;
	case 3:
		cout << "Три Банана";
		break;
	case 4:
		cout << "Четыре Банана";
		break;
	case 5:
		cout << "Пять Бананов";
		break;
	case 6:
		cout << "Шесть Бананов";
		break;
	case 7:
		cout << "Семь Бананов";
		break;
	case 8:
		cout << "Восемь Бананов";
		break;
	case 9:
		cout << "Девять Бананов";
		break;
	case 0:
		if ((a == 0) and (b == 0)) 
		{
			cout << "Ноль Бананов";
			return 0;
		}
		cout << "Бананов";
		break;
	}



}
