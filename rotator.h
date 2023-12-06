#ifndef POLYGON_MATHEMATICS_ROTATOR_H
#define POLYGON_MATHEMATICS_ROTATOR_H

// Includes:
#include "vector2.h"
#include <cmath>

// Defines:
# define POLYGON_PI 3.14159265358979323846 

namespace polygon
{
	class Rotator2D
	{
	private:
		// Attributes:
		Float32 mCosTheta { POLYGON_NULL };
		Float32 mSinTheta { POLYGON_NULL };

		// Constants:
		static const Float32 RadiansToDegrees;
		static const Float32 DegreesToRadians;

	public:
		// Constructor:
		Rotator2D(Float32 pRadians) : mCosTheta(cos(pRadians)), mSinTheta(sin(pRadians)) { }

		// Methods:
		inline Vector2 LocalUp() const { return {mCosTheta, mSinTheta}; }
		inline Vector2 LocalRight() const { return {-mSinTheta, mCosTheta}; }
		inline Float32 EulerAngles() const { return acos(mCosTheta) * Rotator2D::RadiansToDegrees; }

		void SetEulerAngles(const Float32 pEulerAngles);
		void SetRadians(const Float32 pRadians);

		// Operators:
		inline Vector2 operator*(const Vector2& pLeft) const { return { mCosTheta * pLeft.mX - mSinTheta * pLeft.mY, mSinTheta * pLeft.mX + mCosTheta * pLeft.mY }; }
		inline void operator=(const Float32 mRadians) 
		{ 
			mCosTheta = cos(mRadians); 
			mSinTheta = sin(mRadians); 
		}
	};
}

#endif // !POLYGON_MATHEMATICS_ROTATOR_H