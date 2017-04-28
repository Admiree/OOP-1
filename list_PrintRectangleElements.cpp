#include "stdafx.h"
#include "list.h"

using namespace std;

namespace shapes {
	void list::PrintRectangleElements(ofstream &outFileStream) {
		outFileStream << "Here they are." << endl;
		listElement *temp = listHead;

		while (temp != NULL) {
			temp->shape->WriteInfoAboutRectangleIntoFileStream(temp->shape, outFileStream);
			temp = temp->next;
		}
	}
}
