#include "stdafx.h"
#include "list.h"

using namespace std;

namespace shapes {
	void list::SortByPerimeter() {
		listElement *current = listHead, *temp = NULL, *previous = NULL;
		bool flag = false;

		do {
			flag = false;
			current = listHead;
			while (current->next) {
				if (shape::Compare(current->shape, current->next->shape))
				{
					if (current == listHead)
					{
						temp = current;
						current = temp->next;
						temp->next = current->next;
						current->next = temp;
						listHead = current;
						flag = true;
					}
					else
					{
						temp = current;
						current = temp->next;
						temp->next = current->next;
						current->next = temp;
						previous->next = current;
						flag = true;
					}
				}
				previous = current;
				current = current->next;
			}
		} while (flag);


	}
}
