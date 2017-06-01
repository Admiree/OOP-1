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
		cout << "������������ ������! " << endl;
		exit(1);
	}
	ifstream in(argv[1]);
	ofstream out(argv[2]);

	cout << "�����" << endl;

	list list;
	list.LoadElements(in);
	out << "������ ���������. " << endl << endl;
	list.PrintElements(out);

	out << endl << endl;
	cout << "����������!" << endl;

	out << "������������� ���������. " << endl << endl;
	list.SortByPerimeter();

	list.PrintElements(out);

	out << endl << endl;

	list.LoadElements(in);

	string enter;

	cout << "��� �� �� ������ �������?" << endl;
	cout << "����������, ������� (1 - ����; 2 - �������������; 0 - ���):" << endl;
	cin >> enter;

	out << "���� ������. " << endl << endl;

	list.PrintElementsByMask(out, enter);

	out << endl << endl;
	out << "��������� ����. " << endl << endl;
	list.Clear();

	cout << "���������!" << endl;
	cout << "����" << endl;

	in.close();
	out.close();

	getchar();
	getchar();

	return 0;
}

