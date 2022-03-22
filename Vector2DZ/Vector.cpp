#include "Vector.h"
void Vector::SetVec(float x1,float y1)
{
	x = x1;
	y = y1;
}
float Vector::GetVecX()
{
	return x;
}
float Vector::GetVecY()
{
	return y;
}
float Vector::Scal2V(Vector v2)
{
	return v2.GetVecX() * this->x + v2.GetVecY() * this->y; //скалярное произвед
}
float Vector::VectYmn2V(Vector v2)
{
	return this->x * v2.GetVecY() - this->y * v2.GetVecX(); //векторное произвед
}
float Vector::LengthVec()
{
	return sqrt(x * x + y * y); //длина вектора
}

