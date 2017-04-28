#include "stdafx.h"
#ifndef _shape
#define _shape

#include <fstream>

using namespace std;
namespace shapes {
	class shape {
		int key = 0;
		int color = 0;
		float plotn = 0;
	public:
		static  shape* ReadInfoAboutShapeFromFileStream(ifstream &inFileStream);
		static void WriteInfoAboutShapeIntoFileStream(shape *shape, ofstream &outFileStream);
		static bool Compare(shape *current, shape *next, bool SortByIncrease);
		virtual void ReadDimensionsOfShapeFromFileStream(ifstream &inFileStream) = 0;
		virtual void WriteDimensionsOfShapeIntoFileStream(ofstream &outFileStream) = 0;
		virtual float CalculateShapePerimeter() = 0;
	};
}

#endif