#include "stdafx.h"
#include "triangle.h"

using namespace std;

namespace shapes 
{
	void triangle::WriteDimensionsOfShapeIntoFileStream(ostream &outFileStream) {
		outFileStream << "����������� � ����������� : " << "X = " << triangleX << ", Y = " << triangleY << ", Z = " << triangleZ << endl;
	}
}
