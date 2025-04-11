#include<iostream>
using namespace std;


//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI
//#define PERFECT_NUMBER
#define PIFAGOR

void  main()
{
	setlocale(LC_ALL, "Russian");
	//for (;;)
	//{
	//	cout << "hello FOR";
	//}

	/*int n=5;
	for (
		int i = 0;
		i < n;
		i++
		)
	{
	cout << i << "\t";
	}*/
#ifdef FACTORIAL
	int n;
	cout << "¬вкдите количество итерацмй: "; cin >> n;
	long long int f = 1;
	for (int i = 1;i <= n;i++)
	{
		cout << i << "\t";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER

	double a;
	int n;
	cout << "¬ведите основание степени:"; cin >> a;
	cout << "¬ведите показатель степени:"; cin >> n;
	double N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0;i < n;i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER

#ifdef ASCII
	for (int i = 0; i < 256;i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << "\t";
	}
#endif // ASCII

#ifdef FIBONACCI
	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b;a < n; a = b, b = c, c = a + b)
		cout << a << "\t";
	cout << endl;
	cout << "¬ведите количество членов р€да:"; cin >> n;
	for (long long int i = 0, a = 0, b = 1, c = a + b; i < n; i++, c = (a = b) + (b = c))
		cout << a << "\t";
	cout << endl;
#endif // FIBONACCI

#ifdef PERFECT_NUMBER
	int n;
	cout << "¬ведите предельное число:"; cin >> n;
	for (int i = 0; i < n;i++)
	{
		bool simple = true;
		for (int j = 2;j < sqrt(i); j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple) cout << i << "\t";
	}
	cout << endl;
#endif // PERFECT_NUMBER

#ifdef PIFAGOR
	int i;
	int j;
	int f;
	for (i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			f = j * i;
			cout << f << "\t";
		}
		cout << "" << endl;
	}
#endif // PIFAGOR


	


}


