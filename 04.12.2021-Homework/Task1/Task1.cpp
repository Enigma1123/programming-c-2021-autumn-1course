#include "mylib.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int m = 0;
    int R = 0;
    int v = 0;
    cout << "Введите цифру 1 чтобы использовать функцию, возвращающую число шагов." << endl << "Введите цифру 2 чтобы использовать функцию, печатающую окружность." << endl;;
    cin >> v;
    if (v == 1)
    {
        cout << "Введите цифру: ";
        cin >> m;
        cout << f(m);
    }
    if (v == 2)
    {
        cout << "Введите радиус: ";
        cin >> R;
        g(R);
    }
}
