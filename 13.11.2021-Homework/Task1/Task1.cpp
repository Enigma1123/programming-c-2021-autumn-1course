#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 5;
	int r = 0;
	int k = 0;
	int element = 0;
	int count = 0;
	int choice = 0;
	int* a = new int [n] {0};
	cout << "Введите цифру 1 чтобы вывести массив." << endl << "Введите цифру 2 чтобы добавить элементы в конец массива." << endl;
	cout << "Введите цифру 3 чтобы добавить элементы в начало массива." << endl << "Введите цифру 4 чтобы удалить элементы из конца массива." << endl;
	cout << "Введите цифру 5 чтобы удалить элементы из начала массива." << endl << "Введите цифру 6 чтобы развернуть массив." << endl;
	cout << "Введите цифру 0 чтобы выйти из программы." << endl;
	do
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
			for (int i = 0; i < count; ++i)
			{
				cout << a[i] << " ";
			}
			cout << endl;
			cout << "Вы вывели элементы массива. Возврат в меню программы. Введите цифру соответствующую одной из команд." << endl;
			break;
		case 2:
			cin >> element;
			if (count == n)
			{
				int* t = new int[n * 2]{ 0 };
				for (int i = 0; i < n; ++i) t[i] = a[i];
				delete[]a;
				a = t;
				n *= 2;
			}
			a[count] = element;
			++count;
			cout << "Вы добавили элемент в конец массива. Возврат в меню программы. Введите цифру соответствующую одной из команд. " << endl;
			break;
		case 3:
			k = count;
			cin >> element;
			if (count == n)
			{
				int* t = new int[n * 2]{ 0 };
				for (int i = 0; i < n; ++i) t[i] = a[i];
				delete[]a;
				a = t;
				n *= 2;
			}
			for (int i = 1; i <= count; ++i)
			{
				a[k] = a[k - 1];
				--k;
			}
			a[0] = element;
			count++;
			cout << "Вы добавили элемент в начало массива. Возврат в меню программы. Введите цифру соответствующую одной из команд. " << endl;
			break;
		case 4:
			count = count - 1;
			a[count] = 0;
			cout << "Вы удалили элемент из конца массива. Возврат в меню программы. Введите цифру соответствующую одной из команд. " << endl;
			break;
		case 5:
			k = count;
			count = count - 1;
			a[0] = 0;
			for (int i = 0; i < k; i++)
			{
				a[i] = a[i + 1];
			}
			cout << "Вы удалили элемент из начала массива. Возврат в меню программы. Введите цифру соответствующую одной из команд. " << endl;
			break;
		case 6:
			int* r = new int[n] { 0 };
			for (int i = 0; i < n; ++i) r[i] = a[i];
			for (int i = 0; i < count; i++)
			{
				a[i] = r[count - 1 - i];
			}
			cout << "Вы развернули массив. Возврат в меню программы. Введите цифру соответствующую одной из команд. " << endl;
			delete[]r;
			break;
		}

	} while (choice != 0);
	return 0;
}