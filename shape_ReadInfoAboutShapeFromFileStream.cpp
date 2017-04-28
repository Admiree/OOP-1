#include "stdafx.h"
#include "shape.h"

#include "rectangle.h"
#include "circle.h"

using namespace std;

namespace shapes {
	shape* shape::ReadInfoAboutShapeFromFileStream(ifstream &inFileStream) {
		shape *readShape;
		int key;
		int color;
		//int hight;
		float plotn;

		inFileStream >> key;
		inFileStream >> color;

		switch (key) {
		case 1:
			readShape = new rectangle;
			break;
		case 2:
			readShape = new circle;
			break;
		default:
			return NULL;
			break;
		}

		readShape->key = key;
		readShape->color = color;

		readShape->ReadDimensionsOfShapeFromFileStream(inFileStream);
		//inFileStream >> hight;
		//readShape->hight = hight;
		return readShape;
	}
}