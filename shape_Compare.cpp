#include "stdafx.h"
#include "shape.h"

using namespace std;

namespace shapes {
	bool shape::Compare(shape *current, shape *next, bool SortByIncrease)
	{
		if (SortByIncrease)
		{
			if (current->CalculateShapePerimeter() > next->CalculateShapePerimeter())
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			if (current->CalculateShapePerimeter() < next->CalculateShapePerimeter())
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
}
