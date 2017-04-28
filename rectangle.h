#include "stdafx.h"
#ifndef _rectangle
#define _rectangle

#include "shape.h"

namespace shapes {
	class rectangle : public shape {
		int startX, startY;
		int endX, endY;
	public:
		void ReadDimensionsOfShapeFromFileStream(ifstream &inFileStream);
		void WriteDimensionsOfShapeIntoFileStream(ofstream &outFileStream);
		rectangle() {}
	};
}

#endif
