#include "stdafx.h"
#include "circle.h"
#include <math.h>

#define pi 3.14159265358979323846

using namespace std;

namespace shapes {
	float circle::CalculateShapePerimeter() {
		return 2 * pi * radius;
	}
}
