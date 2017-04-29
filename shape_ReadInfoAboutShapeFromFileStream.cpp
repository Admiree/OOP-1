#include "stdafx.h"
#include "shape.h"

#include "rectangle.h"
#include "circle.h"
#include "triangle.h"


using namespace std;

namespace shapes {
	shape* shape::ReadInfoAboutShapeFromFileStream(ifstream &inFileStream) {
		shape *readShape;
		int key;
		int color;
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
		case 3:
			readShape = new triangle;
			break;
		default:
			return NULL;
			break;
		}


		readShape->key = key;
		readShape->color = color;

		readShape->ReadDimensionsOfShapeFromFileStream(inFileStream);
		inFileStream >> plotn;
		readShape->plotn = plotn;

		return readShape;
	}
}