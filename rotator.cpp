#include "rotator.h"

const polygon::Float32 polygon::Rotator2D::RadiansToDegrees = 180 / POLYGON_PI;
const polygon::Float32 polygon::Rotator2D::DegreesToRadians = POLYGON_PI / 180;

void polygon::Rotator2D::SetEulerAngles(const Float32 pEulerAngles)
{
	mSinTheta = sin(pEulerAngles * Rotator2D::DegreesToRadians);
	mCosTheta = cos(pEulerAngles * Rotator2D::DegreesToRadians);
}

void polygon::Rotator2D::SetRadians(const Float32 pRadians)
{
	mSinTheta = sin(pRadians);
	mCosTheta = cos(pRadians);
}