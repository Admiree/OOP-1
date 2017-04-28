#include "stdafx.h"
#include "shape.h"

#include "rectangle.h"
#include "circle.h"


using namespace std;

namespace shapes {
	void shape::WriteInfoAboutShapeIntoFileStream(shape *shape, ofstream &outFileStream) {

		outFileStream << "It is: ";

		shape->WriteDimensionsOfShapeIntoFileStream(outFileStream);

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

		outFileStream << "; Its plotnost is " << shape->plotn << "  ";

		outFileStream << ";" << endl;
	}
}