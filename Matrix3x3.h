#ifndef POLYGON_MATHEMATICS_MATRIX3X3_H
#define POLYGON_MATHEMATICS_MATRIX3X3_H

// Includes:
#include "Vector2.h"

namespace polygon
{
	class Matrix3x3
	{
	public:
		// Constants:
		static const Uint32 SIZE = 9;
		static const Uint32 COLUMNS = 3;
		static const Float32 DEFAULT_INITIALISER;

		// Attributes:
		Float32* mComponents;

		// Constructor:
		Matrix3x3(Float32 p1A = 0.0f, Float32 p1B = 0.0f, Float32 p1C = 0.0f, Float32 p2A = 0.0f, Float32 p2B = 0.0f, Float32 p2C = 0.0f, Float32 p3A = 0.0f, Float32 p3B = 0.0f, Float32 p3C = 0.0f);

		// Methods:


		// Operators:
	};
}

#endif // !POLYGON_MATHEMATICS_MATRIX3X3_H