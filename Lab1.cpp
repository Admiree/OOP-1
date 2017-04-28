#include "stdafx.h"
#include <fstream>
#include <iostream>
#include "list.h"

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
	list.Clear();
	out << "Empty container. " << endl << endl;
	list.PrintElements(out);

	cout << "Stop" << endl;

	in.close();
	out.close();

	return 0;
}

