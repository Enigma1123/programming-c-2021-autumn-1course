#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b;
	c = ((a + b) + ((a - b) * (a - b)) / (a - b)) / 2;
	cout << c;
}// Заменил взятия модуля на умножение иделение на саму себя, и это почему-то работает, но оно не должно, и я не совсем понимаю почему все таки работает.