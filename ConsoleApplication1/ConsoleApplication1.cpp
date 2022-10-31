#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double P, S;
	int n,k;
	P = 1;
	n = 1;
	while (n <= 25)
	{
		S = 0;
		k = 1;
		while (k <= n)
		{
			P *= sqrt(cos(k + n) * cos(k + n));
			k++;
		}
		S += cos(n) + P;
		n++;
	}
	cout << P << endl;
	P = 1;
	n = 1;
	do {
		S = 0;
		k = 1;
			do{
				P *= sqrt(cos(k + n) * cos(k + n));
				k++;
			} while (k <= n);
			S += cos(n) + P;
			n++;
	} while (n <= 25);
	cout << P << endl;

	P = 1;
	for (n=1;n <= 25;n++)
	{
		S=0;
			for (k = 1; k <= n; k++)
			{
				P *= sqrt(cos(k + n) * cos(k + n));
			}
			S += cos(n) + P;
	}
	cout << P << endl;

	P = 1;
	for (n = 25; n >= 1; n--)
	{
		S = 0;
		for (k = n; k >= 1; k--)
		{
			P *= sqrt(cos(k + n) * cos(k + n));
		}
		S += cos(n) + P;
	}
	cout << P << endl;

	return 0;
}