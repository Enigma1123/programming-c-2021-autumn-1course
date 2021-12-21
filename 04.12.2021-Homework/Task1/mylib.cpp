#include "mylib.h"
#include <iostream>

using namespace std;

int f(int m)
{
    int k = 0;
    while (m != 1)
    {
        if (m % 2 == 0)
        {
            m = m / 2;
        }
        else
        {
            m = 3*m + 1;
        }
        k++;
    }
    return k;
}

void g(int R)
{
    int N = 0;
    int n = 0;
    int c = 1;
    double d = 0;
    N = 2 * R;
    d = 1.0 / R;
    for (int i = R; i >= -R; --i)
    {
        n = (cos(asin(d * abs((i)))) * R);
        for (int j = 0; j <= R - n; ++j)
        {
            cout << " ";
        }
        cout << "*";
        for (int j = 2; j <= (2 * n); ++j)
        {
            cout << " ";
        }
        if ((c != 1) and (c != 2 * R + 1))
        {
            cout << "*";
        }
        cout << endl;
        c++;
    }
}