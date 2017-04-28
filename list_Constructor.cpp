#include "stdafx.h"
#include "list.h"

namespace shapes {	
	void list::Clear()  {
		while (listHead != NULL) {
			listElement *temp = listHead->next;
			delete listHead;
			listHead = temp;
		}
		listLength = 0;
	}
	void list::Init()  {		
		listHead = NULL;
		listLength = 0;
	}
} 
