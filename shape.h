#include "stdafx.h"
#ifndef _shape
#define _shape

#include <fstream>

using namespace std;

namespace shapes {
	class shape {
		int key = 0;
		int color = 0;
	public:
		static  shape* ReadInfoAboutShapeFromFileStream(ifstream &inFileStream);
		static void WriteInfoAboutShapeIntoFileStream(shape *shape, ofstream &outFileStream);
		static void WriteInfoAboutRectangleIntoFileStream(shape *shape, ofstream &outFileStream);
		virtual void ReadDimensionsOfShapeFromFileStream(ifstream &inFileStream) = 0;
		virtual void WriteDimensionsOfShapeIntoFileStream(ofstream &outFileStream) = 0;
	};
}

#endif