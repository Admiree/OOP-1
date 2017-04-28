#include "stdafx.h"
#include "circle.h"

using namespace std;

namespace shapes {
	void circle::ReadDimensionsOfShapeFromFileStream(ifstream &inFileStream) {
		inFileStream >> radius >> centerX >> centerY;
	}
}
