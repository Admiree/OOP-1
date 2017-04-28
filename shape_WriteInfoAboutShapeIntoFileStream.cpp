#include "stdafx.h"
#include "shape.h"

#include "rectangle.h"
#include "circle.h"

using namespace std;

namespace shapes {
	void shape::WriteInfoAboutShapeIntoFileStream(shape *shape, ofstream &outFileStream) {

		outFileStream << "It is ";

		switch (shape->key) {
		case 1:
			outFileStream << "Rectangle";
			break;
		case 2:
			outFileStream << "Circle";
			break;
		default:
			break;
		}

		outFileStream << "; Its color is ";

		switch (shape->color) {
		case 1:
			outFileStream << "RED";
			break;
		case 2:
			outFileStream << "ORANGE";
			break;
		case 3:
			outFileStream << "YELLOW";
			break;
		case 4:
			outFileStream << "GREEN";
			break;
		case 5:
			outFileStream << "CYAN";
			break;
		case 6:
			outFileStream << "BLUE";
			break;
		case 7:
			outFileStream << "MAGNETA";
			break;
		}

		outFileStream << "; And its dimensions are: ";

		shape->WriteDimensionsOfShapeIntoFileStream(outFileStream);

		outFileStream << ";" << endl;
	}
}