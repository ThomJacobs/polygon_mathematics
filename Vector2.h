#ifndef POLYGON_MATHEMATICS_VECTOR_H
#define POLYGON_MATHEMATICS_VECTOR_H

// Includes:
#include "type_definitions.h"

namespace polygon
{
	class Vector2
	{
	public:
		// Constants:
		const Float32 DEFAULT_COMPONENT_VALUE = 0.0f;

		// Attributes:
		Float32 mX = DEFAULT_COMPONENT_VALUE;
		Float32 mY = DEFAULT_COMPONENT_VALUE;

		// Constructor:
		Vector2(Float32 pX = 0.0f, Float32 pY = 0.0f) : mX(pX), mY(pY) { }

		// Methods:
		Float32 Magnitude() const;
		Vector2 Normalise() const;

		// Operators (Constant):
		inline Vector2 operator+(Vector2& pRight) const { return Vector2(mX + pRight.mX, mY + pRight.mY); }
		inline Vector2 operator-(Vector2& pRight) const { return Vector2(mX - pRight.mX, mY - pRight.mY); }
		inline Vector2 operator/(Vector2& pRight) const { return Vector2(mX / pRight.mX, mY / pRight.mY); }

		// Operators (Non-Constant).
		inline void operator=(Vector2& pRight)
		{
			mX = pRight.mX;
			mY = pRight.mY;
		}

		inline void operator-=(Vector2& pRight)
		{
			mX -= pRight.mX;
			mY -= pRight.mY;
		}

		inline void operator+=(Vector2& pRight)
		{
			mX += pRight.mX;
			mY += pRight.mY;
		}

		inline void operator/=(Vector2& pRight)
		{
			mX /= pRight.mX;
			mY /= pRight.mY;
		}
	};
}

#endif // !POLYGON_MATHEMATICS_VECTOR_H