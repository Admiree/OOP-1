#include "stdafx.h"
#include "list.h"
#include "rectangle.h"
#include "circle.h"
using namespace std;

namespace shapes {
	void list::PrintElementsByMask(ostream &outFileStream, string &menu) {
		outFileStream << "Итого." << endl;
		listElement *temp = listHead;

		while (temp != NULL) {
			if (menu.find('2') != -1)
			{
				if (rectangle* r = dynamic_cast<rectangle*>(temp->shape))
				{
					temp->shape->WriteInfoAboutShapeIntoFileStream(temp->shape, outFileStream);
				}
			}
			if (menu.find('1') != -1)
			{
				if (circle* c = dynamic_cast<circle*>(temp->shape)) {
					temp->shape->WriteInfoAboutShapeIntoFileStream(temp->shape, outFileStream);
				}
			}
			if (menu.find('0') != -1)
			{
				temp->shape->WriteInfoAboutShapeIntoFileStream(temp->shape, outFileStream);
			}
			temp = temp->next;
		}
		
	}
}
