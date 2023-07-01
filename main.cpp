#include"Point.h"
#include<iostream>
int check() {
	int x;
	cin >> x;
	while (!cin)
	{
		cin.clear();
		cin.ignore();
		cout << "����� ������ �����" << endl;
		cin >> x;
	}
	return x;
}
double check(int f) {
	double x;
	cin >> x;
	while (!cin)
	{
		cin.clear();
		cin.ignore();
		cout << "����� ������ �����" << endl;
		cin >> x;
	}
	return x;
}
int main()
{
	setlocale(0, "");
	Point a, b;
	string str;
	bool flag;
	cout << "������� ���������� �����(������� �� ��� X, ����� �� ��� Y)" << endl;
	double _x, _y;
	_x = check(1);
	_y = check(1);
	a.setX(_x);
	a.setY(_y);
	int x = 1;
	while (x) {
		cout << "1-����������� ����� �� ��� X\n2-����������� ����� �� ��� Y\n3-����������� ����������� �� ������ ���������\n4-���������� ���������� ����� ����� �������\n5-�������������� � �������� ����������\n6-��������� �� ���������� �����\n7-��������� ���������� x\n8-��������� ���������� y\n9-����� ���������� x\n10-����� ���������� y\n11-���������� � �����" << endl;
		x = check();
		while ((x > 11) || (x < 1))
		{
			cout << "����� ������ ����� �� 1 �� 11(������������)" << endl;
			cout << "1-����������� ����� �� ��� X\n2-����������� ����� �� ��� Y\n3-����������� ����������� �� ������ ���������\n4-���������� ���������� ����� ����� �������\n5-�������������� � �������� ����������\n6-��������� �� ���������� �����\n7-��������� ���������� x\n8-��������� ���������� y\n9-����� ���������� x\n10-����� ���������� y\n11-���������� � �����" << endl;
			x = check();
		}
		switch (x)
		{
		case 1: cout << "�������� ��������,�� ������� �� ������ �������� ����� ������������ ��� X" << endl;
			_x = check(1);
			a.moveX(_x);
			break;
		case 2:
			cout << "�������� ��������,�� ������� �� ������ �������� ����� ������������ ��� Y" << endl;
			_y = check(1);
			a.moveY(_y);
			break;
		case 3:
			cout << "���������� �� ������ ��������� " << a.distanceToTheOrigin() << endl;
			break;
		case 4:
			cout << "������� ���������� ������ �����(������� �� ��� X, ����� �� ��� Y)" << endl;
			_x = check(1);
			_y = check(1);
			b.setX(_x);
			b.setY(_y);
			cout << "���������� ����� ����� ������� " << a.distBetweenPoints(b) << endl;
			break;
		case 5:
			str = a.transformToPolar();
			cout << str << endl;
			break;
		case 6:
			cout << "������� ���������� ������ �����(������� �� ��� X, ����� �� ��� Y)" << endl;
			_x = check(1);
			_y = check(1);
			b.setX(_x);
			b.setY(_y);
			flag = a.comparison(b);
			if (flag)cout << "����� ���������" << endl;
			else cout << "����� �� ���������" << endl;
			break;
		case 7:
			cout << "������� ����� �������� ���������� x" << endl;
			_x = check(1);
			a.setX(_x);
			break;
		case 8:
			cout << "������� ����� �������� ���������� y" << endl;
			_y = check(1);
			a.setY(_y);
			break;
		case 9:
			cout << "���������� x=" << a.getX() << endl;
			break;
		case 10:
			cout << "���������� y=" << a.getY() << endl;
			break;
		case 11:
			str = a.toString();
			cout << str << endl;
			break;
		}
		cout << "1-��������� ��� ���� ��������,0-��������� ������ ���������" << endl;
		x = check();
		while ((x > 1) || (x < 0)) {
			cout << "����� ������ 1 ��� 0" << endl;
			cout << "1-��������� ��� ���� ��������,0-��������� ������ ���������" << endl;
			x = check();
		}
	}
	return 0;
}