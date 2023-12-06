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

		// Static Constants:
		static const Vector2 GLOBAL_UP;
		static const Vector2 GLOBAL_DOWN;
		static const Vector2 GLOBAL_LEFT;
		static const Vector2 GLOBAL_RIGHT;

		// Attributes:
		Float32 mX { DEFAULT_COMPONENT_VALUE };
		Float32 mY { DEFAULT_COMPONENT_VALUE };

		// Constructor:
		Vector2(Float32 pX = 0.0f, Float32 pY = 0.0f) : mX(pX), mY(pY) { }

		// Methods:
		Float32 Magnitude() const;
		Vector2 Normalise() const;

		// Operators (Non-Constant).
		inline void operator=(const Vector2& pRight)
		{
			mX = pRight.mX;
			mY = pRight.mY;
		}

		inline void operator-=(const Vector2& pRight)
		{
			mX -= pRight.mX;
			mY -= pRight.mY;
		}

		inline void operator+=(const Vector2& pRight)
		{
			mX += pRight.mX;
			mY += pRight.mY;
		}

		inline void operator/=(const Vector2& pRight)
		{
			mX /= pRight.mX;
			mY /= pRight.mY;
		}
	};

	// Operators (Constant):
	inline Vector2 operator+(const Vector2& pLeft, const Vector2& pRight) { return Vector2(pLeft.mX + pRight.mX, pLeft.mY + pRight.mY); }
	inline Vector2 operator-(const Vector2& pLeft, const Vector2& pRight) { return Vector2(pLeft.mX - pRight.mX, pLeft.mY - pRight.mY); }
	inline Vector2 operator/(const Vector2& pLeft, const Vector2& pRight) { return Vector2(pLeft.mX / pRight.mX, pLeft.mY / pRight.mY); }
}

#endif // !POLYGON_MATHEMATICS_VECTOR_H