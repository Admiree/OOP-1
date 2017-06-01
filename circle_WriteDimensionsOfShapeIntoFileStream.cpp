#include "stdafx.h"
#include "circle.h"

using namespace std;

namespace shapes {
	void circle::WriteDimensionsOfShapeIntoFileStream(ostream &outFileStream) {
		outFileStream << "круг с параметрами : " << "радиус = " << radius << ", центр X = " << centerX << ", центр Y = " << centerY << endl;
	}
}
