#include "Matrix3x3.h"

// Constants:
const polygon::Float32 polygon::Matrix3x3::DEFAULT_INITIALISER = 0.0f;

// Constructors:
polygon::Matrix3x3::Matrix3x3(Float32 p1A, Float32 p1B, Float32 p1C, Float32 p2A, Float32 p2B, Float32 p2C, Float32 p3A, Float32 p3B, Float32 p3C)
{
	mComponents = new Float32[Matrix3x3::SIZE] { p1A, p1B, p1C, p2A, p2B, p2C, p3A, p3B, p3C };
}