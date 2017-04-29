#include "stdafx.h"
#include <fstream>
#include <iostream>
#include "list.h"
#include <string>

using namespace std;
using namespace shapes;

int main(int argc, char* argv[]) {

	/*ifstream in;
	in.open("in.txt");

	ofstream out;
	out.open("out.txt");*/

	if (argc != 3) {
		cout << "Incorrect command line! " << "Waited: command in_file out_file" << endl;
		exit(1);
	}
	ifstream in(argv[1]);
	ofstream out(argv[2]);


	cout << "Start" << endl;

	list list;
	list.LoadElements(in);
	out << "Filled container. " << endl << endl;
	list.PrintElements(out);

	out << endl << endl;
	cout << "Done!" << endl;

	out << "Sorted container. " << endl << endl;
	list.SortByPerimeter();

	list.PrintElements(out);

	out << endl << endl;

	//out << "Empty container. " << endl << endl;
	//list.Clear();
	//list.PrintElements(out);

	list.LoadElements(in);

	//out << "Filled container. " << endl << endl;

	string enter;

	cout << "Please, enter (1 - circle; 2 - rectangle; 0 - all of them):" << endl;
	cin >> enter;

	out << "By your mask. " << endl << endl;

	list.PrintElementsByMask(out, enter);

	out << endl << endl;
	out << "Empty container. " << endl << endl;
	list.Clear();

	cout << "Stop" << endl;

	in.close();
	out.close();

	return 0;
}

