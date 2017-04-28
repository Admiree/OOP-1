#include "stdafx.h"
#include "shape.h"

#include "rectangle.h"
#include "circle.h"

using namespace std;

namespace shapes {
	void shape::WriteInfoAboutRectangleIntoFileStream(shape *shape, ofstream &outFileStream) {

		WriteInfoAboutShapeIntoFileStream(shape, outFileStream);
	}
}
