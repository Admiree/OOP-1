#include "stdafx.h"
#include <fstream>
#include <iostream>
#include "list.h"
#include <string>
#include "windows.h"

using namespace std;
using namespace shapes;

int main(int argc, char* argv[]) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	if (argc != 3) {
		cout << "Некорректные данные! " << endl;
		exit(1);
	}
	ifstream in(argv[1]);
	ofstream out(argv[2]);

	cout << "Старт" << endl;

	list list;
	list.LoadElements(in);
	out << "Полный контейнер. " << endl << endl;
	list.PrintElements(out);

	out << endl << endl;
	cout << "Приступаем!" << endl;

	out << "Сортированный контейнер. " << endl << endl;
	list.SortByPerimeter();

	list.PrintElements(out);

	out << endl << endl;

	list.LoadElements(in);

	string enter;

	cout << "Что бы вы хотели вывести?" << endl;
	cout << "Пожалуйста, введите (1 - круг; 2 - прямоугольник; 0 - все):" << endl;
	cin >> enter;

	out << "Ваши данные. " << endl << endl;

	list.PrintElementsByMask(out, enter);

	out << endl << endl;
	out << "Контейнер пуст. " << endl << endl;
	list.Clear();

	cout << "Выполнено!" << endl;
	cout << "Стоп" << endl;

	in.close();
	out.close();

	getchar();
	getchar();

	return 0;
}

