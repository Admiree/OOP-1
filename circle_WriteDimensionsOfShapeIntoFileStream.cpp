#include "stdafx.h"
#include "circle.h"

using namespace std;

namespace shapes {
	void circle::WriteDimensionsOfShapeIntoFileStream(ostream &outFileStream) {
		outFileStream << "���� � ����������� : " << "������ = " << radius << ", ����� X = " << centerX << ", ����� Y = " << centerY << endl;
	}
}
