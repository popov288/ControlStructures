#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "ControlStructures" << endl;
	int temperature;
	cout << "������� ����������� �������"; cin >> temperature;
	cout << temperature << endl;
	if (temperature > 50)
	{
		cout << "�� �� ������ �������" << endl;
	}
	else if (temperature > 30)
	{
		cout << "����� ��� �����" << endl;
	}
	else if (temperature > 20)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 10)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 0)
	{
		cout << "���������" << endl;
	}
	else if (temperature>-10)
	{
		cout << "�����" << endl;
	}
	else if (temperature > -30)
	{
		cout << "������� �����" << endl;
	}
	else if (temperature > -70)
	{
		cout << "�� �� �������� ������" << endl;
	}
	else
	{
		cout << "�� �� ������ �������" << endl;
	}
	int i = 3;
	i = i++ + 1 + ++i * 2;
	cout << i << endl;
}