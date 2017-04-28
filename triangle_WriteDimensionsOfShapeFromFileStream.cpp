#include "stdafx.h"
#include "triangle.h"

using namespace std;

namespace shapes {
	void triangle::WriteDimensionsOfShapeIntoFileStream(ofstream &outFileStream) {
		outFileStream << "Triangle;  It's Dimensions : " << "X = " << triangleX << ", Y = " << triangleY << ", Z = " << triangleZ;
	}
}
