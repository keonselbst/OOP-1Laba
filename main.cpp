#include"Point.h"
#include<iostream>
int check() {
	int x;
	cin >> x;
	while (!cin)
	{
		cin.clear();
		cin.ignore();
		cout << "нужно ввести число" << endl;
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
		cout << "нужно ввести число" << endl;
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
	cout << "¬ведите координаты точки(сначала по оси X, затем по оси Y)" << endl;
	double _x, _y;
	_x = check(1);
	_y = check(1);
	a.setX(_x);
	a.setY(_y);
	int x = 1;
	while (x) {
		cout << "1-перемещение точки по оси X\n2-перемещение точки по оси Y\n3-определение рассто€ние€ до начала координат\n4-опредление рассто€ни€ между двум€ точками\n5-преобразование в пол€рные координаты\n6-сравнение на совпадение точек\n7-изменение координаты x\n8-изменение координаты y\n9-вывод координаты x\n10-вывод координаты y\n11-информаци€ о точке" << endl;
		x = check();
		while ((x > 11) || (x < 1))
		{
			cout << "Ќужно ввести цифру от 1 до 11(включительно)" << endl;
			cout << "1-перемещение точки по оси X\n2-перемещение точки по оси Y\n3-определение рассто€ние€ до начала координат\n4-опредление рассто€ни€ между двум€ точками\n5-преобразование в пол€рные координаты\n6-сравнение на совпадение точек\n7-изменение координаты x\n8-изменение координаты y\n9-вывод координаты x\n10-вывод координаты y\n11-информаци€ о точке" << endl;
			x = check();
		}
		switch (x)
		{
		case 1: cout << "¬введите значение,на которое вы хотите сдвинуть точку относительно оси X" << endl;
			_x = check(1);
			a.moveX(_x);
			break;
		case 2:
			cout << "¬введите значение,на которое вы хотите сдвинуть точку относительно оси Y" << endl;
			_y = check(1);
			a.moveY(_y);
			break;
		case 3:
			cout << "–ассто€ние до начала координат " << a.distanceToTheOrigin() << endl;
			break;
		case 4:
			cout << "¬ведите координаты второй точки(сначала по оси X, затем по оси Y)" << endl;
			_x = check(1);
			_y = check(1);
			b.setX(_x);
			b.setY(_y);
			cout << "–ассто€ние между двум€ точками " << a.distBetweenPoints(b) << endl;
			break;
		case 5:
			str = a.transformToPolar();
			cout << str << endl;
			break;
		case 6:
			cout << "¬ведите координаты второй точки(сначала по оси X, затем по оси Y)" << endl;
			_x = check(1);
			_y = check(1);
			b.setX(_x);
			b.setY(_y);
			flag = a.comparison(b);
			if (flag)cout << "“очки совпадают" << endl;
			else cout << "“очки не совпадают" << endl;
			break;
		case 7:
			cout << "¬ведите новое значение координаты x" << endl;
			_x = check(1);
			a.setX(_x);
			break;
		case 8:
			cout << "¬ведите новое значение координаты y" << endl;
			_y = check(1);
			a.setY(_y);
			break;
		case 9:
			cout << " оордината x=" << a.getX() << endl;
			break;
		case 10:
			cout << " оордината y=" << a.getY() << endl;
			break;
		case 11:
			str = a.toString();
			cout << str << endl;
			break;
		}
		cout << "1-выполнить еще одну операцию,0-завершить работу программы" << endl;
		x = check();
		while ((x > 1) || (x < 0)) {
			cout << "Ќужно ввести 1 или 0" << endl;
			cout << "1-выполнить еще одну операцию,0-завершить работу программы" << endl;
			x = check();
		}
	}
	return 0;
}