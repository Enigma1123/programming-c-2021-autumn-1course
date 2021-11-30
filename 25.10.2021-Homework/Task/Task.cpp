<<<<<<< HEAD
﻿#include <iostream>

using namespace std;

int main()
{
	const int N = 100;
	int n = 0;
	int sum = 0;
	int pon = 1;
	int ind = 1;
	int min = 0;
	int max1 = 0;
	int max2 = 0;

	cin >> n;
	int a[N] = { 0 };


	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		sum = sum + a[i];
		if (a[i] < 0) pon = pon * a[i];

	}
	min = a[1];
	max1 = a[1];
	max2 = a[1];



	cout << "ARRAY : ";
	for (int i = 1; i <= n; ++i)
	{
		cout << a[i] << " ";
		if (a[i] < a[1]) ind = i;
		if (a[i] > max1)
		{

			max2 = max1;
			max1 = a[i];
		}
	}


	cout << endl << "EVEN : ";
	for (int i = 1; i <= n; ++i)
	{
		if (a[i] % 2 == 0) cout << a[i] << " ";

	}



	cout << endl << "SUM : " << sum;


	cout << endl << "PRODUCT OF NEGATIVE : " << pon;


	cout << endl << "FIRST MIN INDEX : " << ind;


	cout << endl << "SECOND MAX : " << max2;

	cout << endl << "REVERSE : ";
	for (int i = n; i >= 1; --i)
	{
			cout << a[i] << " ";

	}

	cout << endl << "ODD INDEXES : ";
	for (int i = 1; i <= n; ++i)
		{
			if (i % 2 != 0) cout << a[i] << " ";
		}
}
=======
﻿#include <iostream>

using namespace std;

int main()
{
	const int N = 100;
	int n = 0;
	int sum = 0;
	int pon = 1;
	int ind = 1;
	int min = 0;
	int max1 = 0;
	int max2 = 0;

	cin >> n;
	int a[N] = { 0 };


	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		sum = sum + a[i];
		if (a[i] < 0) pon = pon * a[i];

	}
	min = a[1];
	max1 = a[1];
	max2 = a[1];



	cout << "ARRAY : ";
	for (int i = 1; i <= n; ++i)
	{
		cout << a[i] << " ";
		if (a[i] < a[1]) ind = i;
		if (a[i] > max1)
		{

			max2 = max1;
			max1 = a[i];
		}
	}


	cout << endl << "EVEN : ";
	for (int i = 1; i <= n; ++i)
	{
		if (a[i] % 2 == 0) cout << a[i] << " ";

	}



	cout << endl << "SUM : " << sum;


	cout << endl << "PRODUCT OF NEGATIVE : " << pon;


	cout << endl << "FIRST MIN INDEX : " << ind;


	cout << endl << "SECOND MAX : " << max2;

	cout << endl << "REVERSE : ";
	for (int i = n; i >= 1; --i)
	{
			cout << a[i] << " ";

	}

	cout << endl << "ODD INDEXES : ";
	for (int i = 1; i <= n; ++i)
		{
			if (i % 2 != 0) cout << a[i] << " ";
		}
}
>>>>>>> 52b10e107f7767ed012d72ded81a4fc3d5d6c46e
