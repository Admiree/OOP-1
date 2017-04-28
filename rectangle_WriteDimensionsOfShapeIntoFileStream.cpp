#include "stdafx.h"
#include "rectangle.h"

using namespace std;

namespace shapes {	
	void rectangle::WriteDimensionsOfShapeIntoFileStream(ofstream &outFileStream) {
		outFileStream << "Rectangle;  It's Dimensions : " << "start X = " << startX << ", start Y = " << startY << ", end X = " << endX << ", end Y = " << endY;
	}
} 
