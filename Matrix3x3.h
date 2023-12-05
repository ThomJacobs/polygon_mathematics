#ifndef POLYGON_MATHEMATICS_MATRIX3X3_H
#define POLYGON_MATHEMATICS_MATRIX3X3_H

// Includes:
#include "vector2.h"

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

		// Operators (Scalar):
		inline Matrix3x3 operator* (const Float32 pLeft) const 
		{ 
			Matrix3x3 clone = *this;
			for (int i = 0; i < Matrix3x3::SIZE; i++) { clone.mComponents[i] *= pLeft; }
			return clone;
		}

		// Operators (Matrix):
		inline void operator*= (const Matrix3x3& pLeft)
		{
			for (int i = 0; i < Matrix3x3::COLUMNS; i++)
			{
				for (int j = 0; j < Matrix3x3::COLUMNS; j++)
				{
					for (int k = 0; k < Matrix3x3::COLUMNS; k++)
					{
						mComponents[i * Matrix3x3::COLUMNS + k] *= pLeft.mComponents[k * 3 + j];
					}
				}
			}
		}
	};

	// Operators:
	inline Matrix3x3 operator* (const Matrix3x3 pLeft, const Matrix3x3& pRight)
	{
		for (int i = 0; i < Matrix3x3::COLUMNS; i++)
		{
			for (int j = 0; j < Matrix3x3::COLUMNS; j++)
			{
				for (int k = 0; k < Matrix3x3::COLUMNS; k++)
				{
					pLeft.mComponents[i * Matrix3x3::COLUMNS + k] *= pRight.mComponents[k * 3 + j];
				}
			}
		}

		return pLeft;
	}
}

#endif // !POLYGON_MATHEMATICS_MATRIX3X3_H