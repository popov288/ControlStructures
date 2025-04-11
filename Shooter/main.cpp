#include <iostream>
#include <conio.h>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Russian");

	char key;
	do
	{
		key = _getch();
		if (key == 119)
		{
			cout << "Вперед" << endl;
		}
		else if (key == 115)
		{
			cout << "Назад" << endl;
		}
		else if (key == 97)
		{
			cout << "Влево" << endl;
		}
		else if (key == 100)
		{
			cout << "Вправо" << endl;
		}
		else if (key == 32)
		{
			cout << "Прыжок" << endl;
					}
		else if (key == 13)
		{
			cout << "Огонь" << endl;
		}
		else if (key == 27)
		{
			cout << "Выход" << endl;
		}
		else

			cout << (int)key << "\t" << "Error" << endl;
	} while (key != 5);
}