#include "stdafx.h"
#include "triangle.h"

using namespace std;

namespace shapes 
{
	void triangle::WriteDimensionsOfShapeIntoFileStream(ostream &outFileStream) {
		outFileStream << "треугольник с параметрами : " << "X = " << triangleX << ", Y = " << triangleY << ", Z = " << triangleZ << endl;
	}
}
