#ifndef _circle
#define _circle

#include "shape.h"

namespace shapes {
	class circle : public shape {
		int radius;
		int centerX, centerY;
	public:
		void ReadDimensionsOfShapeFromFileStream(ifstream &inFileStream);
		void WriteDimensionsOfShapeIntoFileStream(ofstream &outFileStream);
		float CalculateShapePerimeter();
		circle() {}
	};
}

#endif

