#ifndef _triangle
#define _triangle

#include "shape.h"

namespace shapes {
	class triangle : public shape {
		int triangleX, triangleY, triangleZ;
	public:
		void ReadDimensionsOfShapeFromFileStream(ifstream &inFileStream);
		void WriteDimensionsOfShapeIntoFileStream(ofstream &outFileStream);
		float CalculateShapePerimeter();
		triangle() {}
	};
}

#endif
