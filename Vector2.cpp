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

// Static constants:
const polygon::Vector2 polygon::Vector2::GLOBAL_UP = Vector2(0, 1);
const polygon::Vector2 polygon::Vector2::GLOBAL_DOWN = Vector2(0, -1);
const polygon::Vector2 polygon::Vector2::GLOBAL_LEFT = Vector2(-1, 0);
const polygon::Vector2 polygon::Vector2::GLOBAL_RIGHT = Vector2(1, 0);