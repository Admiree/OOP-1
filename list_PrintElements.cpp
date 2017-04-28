#include "stdafx.h"
#include "list.h"

using namespace std;

namespace shapes {
	void list::PrintElements(ofstream &outFileStream) {
		outFileStream << "List contents " << listLength << " elements." << endl;
		listElement *temp = listHead;
		int num = listLength;

		while (temp != NULL) {
			outFileStream << num << ": ";
			temp->shape->WriteInfoAboutShapeIntoFileStream(temp->shape, outFileStream);
			temp = temp->next;
			num--;
		}
	}
}
