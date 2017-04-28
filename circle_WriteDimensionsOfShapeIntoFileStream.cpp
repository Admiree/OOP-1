#include "stdafx.h"
#include "circle.h"

using namespace std;

namespace shapes {
	void circle::WriteDimensionsOfShapeIntoFileStream(ofstream &outFileStream) {
		outFileStream << "radius = " << radius << ", center X = " << centerX << ", center Y = " << centerY;
	}
}
