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
			cout << "������" << endl;
		}
		else if (key == 115)
		{
			cout << "�����" << endl;
		}
		else if (key == 97)
		{
			cout << "�����" << endl;
		}
		else if (key == 100)
		{
			cout << "������" << endl;
		}
		else if (key == 32)
		{
			cout << "������" << endl;
					}
		else if (key == 13)
		{
			cout << "�����" << endl;
		}
		else if (key == 27)
		{
			cout << "�����" << endl;
		}
		else

			cout << (int)key << "\t" << "Error" << endl;
	} while (key != 5);
}