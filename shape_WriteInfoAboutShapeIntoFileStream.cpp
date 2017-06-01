#include "stdafx.h"
#include "shape.h"

#include "rectangle.h"
#include "circle.h"
#include "triangle.h"


using namespace std;

namespace shapes {
	void shape::WriteInfoAboutShapeIntoFileStream(shape *shape, ostream &outFileStream) {

		outFileStream << "Ýòî ";

		shape->WriteDimensionsOfShapeIntoFileStream(outFileStream);

		outFileStream << " Öâåò ";

		switch (shape->color) {
		case 1:
			outFileStream << "ÊÐÀÑÍÛÉ";
			break;
		case 2:
			outFileStream << "ÎÐÀÍÆÅÂÛÉ";
			break;
		case 3:
			outFileStream << "ÆÅËÒÛÉ";
			break;
		case 4:
			outFileStream << "ÇÅËÅÍÛÉ";
			break;
		case 5:
			outFileStream << "ÁÈÐÞÇÎÂÛÉ";
			break;
		case 6:
			outFileStream << "ÃÎËÓÁÎÉ";
			break;
		case 7:
			outFileStream << "ÔÈÎËÅÒÎÂÛÉ";
			break;
		}

		outFileStream << "; Ïëîòíîñòü ðàâíà " << shape->plotn << "  ";

		outFileStream << "; Ïåðèìåòð ðàâåí " << shape->CalculateShapePerimeter();

		outFileStream << ";" << endl;
	}
}