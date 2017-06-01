#include "stdafx.h"
#include <math.h>
#include "triangle.h"

using namespace std;

namespace shapes 
{
	float triangle::CalculateShapePerimeter() {
		return triangleX + triangleY + triangleZ;
	}
}
