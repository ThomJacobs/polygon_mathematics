// Includes:
#include "vector2.h"
#include <cmath>

// Defines
#define SQUARE(number) pow(number, 2)
#define VECTOR2_MAGNITUDE(x, y) sqrt(SQUARE(x) + SQUARE(y))

polygon::Vector2 polygon::Vector2::Normalise() const
{
	Float32 magnitude = VECTOR2_MAGNITUDE(mX, mY);
	return Vector2(mX / magnitude, mY / magnitude);
}

polygon::Float32 polygon::Vector2::Magnitude() const
{
	return VECTOR2_MAGNITUDE(mX, mY);
}