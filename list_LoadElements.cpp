#include "stdafx.h"
#include "list.h"

using namespace std;

namespace shapes {
	void list::LoadElements(ifstream &inFileStream) {		
		while (!inFileStream.eof()) {
			listElement *temp = new listElement;
			temp->shape = shape::ReadInfoAboutShapeFromFileStream(inFileStream);
			temp->next = listHead;
			listHead = temp;
			listLength++;
		}
	}
} 
