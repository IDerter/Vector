#pragma once
#ifndef Vector_H
#define Vector_H

#include <iostream>

class Vector 
{
public:
	void SetVec(float x, float y);
	float GetVecX();
	float GetVecY();
	float Scal2V(Vector v1);
	float VectYmn2V(Vector v1);
	float LengthVec();
private:
	float x, y;
};



#endif