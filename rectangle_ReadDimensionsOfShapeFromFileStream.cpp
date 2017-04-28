#include "stdafx.h"
#include "rectangle.h"

using namespace std;

namespace shapes {
	void rectangle::ReadDimensionsOfShapeFromFileStream(ifstream &inFileStream) {
		inFileStream >> startX >> startY >> endX >> endY;
	}
}
