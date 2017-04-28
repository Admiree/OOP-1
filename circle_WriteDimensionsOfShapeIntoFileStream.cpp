#include "stdafx.h"
#include "circle.h"

using namespace std;

namespace shapes {
	void circle::WriteDimensionsOfShapeIntoFileStream(ofstream &outFileStream) {
		outFileStream << "Circle;  It's Dimensions : " << "radius = " << radius << ", center X = " << centerX << ", center Y = " << centerY;
	}
}
