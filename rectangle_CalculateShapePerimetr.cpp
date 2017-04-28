#define _USE_MATH_DEFINES
#include "stdafx.h"
#include "rectangle.h"
#include <math.h>

using namespace std;

namespace shapes {
	float rectangle::CalculateShapePerimeter() {
		return (abs(2 * (endX - startX)) + abs(2 * (endY - startY)));
	}
}
