#include <iostream>;

using namespace std;

int main() 
{
	int s = 109;
	int v = 0;
	int t = 0;
	int a = 0;
	cin >> v >> t;
	a = (((v * t) % s + s) % s);
	cout << a;
}