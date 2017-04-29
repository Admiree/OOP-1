#include "stdafx.h"
#include "shape.h"

using namespace std;

namespace shapes {
	bool shape::Compare(shape *current, shape *next)
	{
		return current->CalculateShapePerimeter() > next->CalculateShapePerimeter();
	}
}
