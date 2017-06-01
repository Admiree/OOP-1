#include "stdafx.h"
#include "rectangle.h"

using namespace std;

namespace shapes {	
	void rectangle::WriteDimensionsOfShapeIntoFileStream(ostream &outFileStream) {
		outFileStream << "прямоугольник с параметрами : " << "начало X = " << startX << ", начало Y = " << startY << ", конец X = " << endX << ", конец Y = " << endY << endl;
	}
} 
