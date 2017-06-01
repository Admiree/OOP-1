#include "stdafx.h"
#include "list.h"

using namespace std;

namespace shapes {
	void list::PrintElements(ostream &outFileStream) {
		outFileStream << "Всего " << listLength << " элементов." << endl;
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
