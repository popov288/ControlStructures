
#include <conio.h>
#include <iostream>

using namespace std;
#define Enter 13
#define Escape 27
#define Uparrow 72
#define Downarrow 80
#define Leftarrow 75
#define Rigtharrow 77

//#define SHOOTER_IF


void main()
{
	setlocale(LC_ALL, "");
	cout << "Shooter" << endl;
#if defined SHOOTER_IF
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W' || key == Uparrow)
		{
			cout << "������" << endl;
		}
		else if (key == 's' || key == 'S' || key == Downarrow)
		{
			cout << "�����" << endl;
		}
		else if (key == 'a' || key == 'A' || key == Leftarrow)
		{
			cout << "�����" << endl;
		}
		else if (key == 'd' || key == 'D' || key == Rigtharrow)
		{
			cout << "������" << endl;
		}
		else if (key == ' ')
		{
			cout << "������" << endl;
		}
		else if (key == Enter)
		{
			cout << "�����" << endl;
		}
		else if (key == Escape)
		{
			cout << "�����" << endl;
		}
		else
		{
			if (key != -32) cout << "Error" << endl;
		}

	} while (key != Escape);
#endif 

	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case'w':
		case'W':
		case Uparrow: cout << "������" << endl; break;
		case's':
		case'S':
		case Downarrow: cout << "�����" << endl; break;
		case'a':
		case'A':
		case Leftarrow: cout << "�����" << endl; break;
		case'd':
		case'D':
		case Rigtharrow: cout << "������" << endl; break;
		case' ': cout << "������" << endl; break;
		case 13: cout << "�����" << endl; break;
		case Escape:
		case -32:break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);
}

