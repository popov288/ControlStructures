
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
			cout << "Вперед" << endl;
		}
		else if (key == 's' || key == 'S' || key == Downarrow)
		{
			cout << "Назад" << endl;
		}
		else if (key == 'a' || key == 'A' || key == Leftarrow)
		{
			cout << "Влево" << endl;
		}
		else if (key == 'd' || key == 'D' || key == Rigtharrow)
		{
			cout << "Вправо" << endl;
		}
		else if (key == ' ')
		{
			cout << "Прыжок" << endl;
		}
		else if (key == Enter)
		{
			cout << "Огонь" << endl;
		}
		else if (key == Escape)
		{
			cout << "Выход" << endl;
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
		case Uparrow: cout << "Вперед" << endl; break;
		case's':
		case'S':
		case Downarrow: cout << "Назад" << endl; break;
		case'a':
		case'A':
		case Leftarrow: cout << "Влево" << endl; break;
		case'd':
		case'D':
		case Rigtharrow: cout << "Вправо" << endl; break;
		case' ': cout << "Прыжок" << endl; break;
		case 13: cout << "Огонь" << endl; break;
		case Escape:
		case -32:break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);
}

