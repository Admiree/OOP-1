#include "stdafx.h"
#include "rectangle.h"

using namespace std;

namespace shapes {	
	void rectangle::WriteDimensionsOfShapeIntoFileStream(ostream &outFileStream) {
		outFileStream << "������������� � ����������� : " << "������ X = " << startX << ", ������ Y = " << startY << ", ����� X = " << endX << ", ����� Y = " << endY << endl;
	}
} 
