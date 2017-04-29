#include "stdafx.h"
#include "triangle.h"

using namespace std;

namespace shapes {
	void triangle::ReadDimensionsOfShapeFromFileStream(ifstream &inFileStream) {
		inFileStream >> triangleX >> triangleY >> triangleZ;
	}
}
