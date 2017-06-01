#include "stdafx.h"
#include "shape.h"

#include "rectangle.h"
#include "circle.h"
#include "triangle.h"


using namespace std;

namespace shapes {
	void shape::WriteInfoAboutShapeIntoFileStream(shape *shape, ostream &outFileStream) {

		outFileStream << "��� ";

		shape->WriteDimensionsOfShapeIntoFileStream(outFileStream);

		outFileStream << " ���� ";

		switch (shape->color) {
		case 1:
			outFileStream << "�������";
			break;
		case 2:
			outFileStream << "���������";
			break;
		case 3:
			outFileStream << "������";
			break;
		case 4:
			outFileStream << "�������";
			break;
		case 5:
			outFileStream << "���������";
			break;
		case 6:
			outFileStream << "�������";
			break;
		case 7:
			outFileStream << "����������";
			break;
		}

		outFileStream << "; ��������� ����� " << shape->plotn << "  ";

		outFileStream << "; �������� ����� " << shape->CalculateShapePerimeter();

		outFileStream << ";" << endl;
	}
}