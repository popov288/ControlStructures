#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define RHOMBUS
#define SQUARE_1

void main()
{
	setlocale(LC_ALL, "Russians");

#ifdef SQUARE

	int i;

	for (i = 1; i <= 5; i++)
	{
		for (int j = 2;j <= 5;j++)
		{
			cout << " *";
		}
		cout << " *" << endl;
	}

#endif // SQUARE

#ifdef TRIANGLE_1
	int i;
	for (i = 1; i <= 5; i++)
	{
		for (int j = i;j < 5;j++)
		{
			cout << " *";
		}
		cout << " *" << endl;
	}

#endif // TRIANGLE_1

#ifdef TRIANGLE_2

	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j <= i;j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif // TRIANGLE_2

#ifdef TRIANGLE_3

	for (int i = 0; i < 5;i++)
	{
		for (int j = 0;j < i; j++)
		{
			cout << "  ";
		}
		for (int j = i; j < 5; j++)
		{
			cout << " *";
		}
		cout << endl;
	}

#endif // TRIANGLE_3

#ifdef TRIANGLE_4
	for (int i = 0; i < 5;i++)
	{
		for (int j = i;j < 5;j++)
		{
			cout << "  ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << " *";
		}
		cout << endl;
	}

#endif // TRIANGLE_4

#ifdef RHOMBUS
	int n;
	cin >> n;
	for (int i = 0; i < n;i++)
	{
		for (int j = i;j < n;j++)
		{
			cout << " ";
		}
		cout << "/";
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		cout << "\\";
		for (int j = i+1;j < n; j++)
		{
			cout << "  ";
		}
		cout << "/";
		cout << endl;
	}

#endif // RHOMBUS

#ifdef SQUARE_1
	int n;

	cin >> n;

	for (int i = 0; i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			/*if (j % 2 == i % 2)
			{
				cout << " +";
			}
			else
			{
				cout << " -";
			}*/
			//j % 2 == i % 2 ? cout << " +":	cout << " -";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
			
		}
		cout << endl;
	}

#endif // SQUARE_1


}