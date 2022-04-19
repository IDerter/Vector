#pragma once
#ifndef Vector_H
#define Vector_H

#include <iostream>

class Vector 
{
	float x, y;
public:
	void SetVec(float x, float y);
	float GetVecX();
	float GetVecY();
	float Scal2V(Vector v1);
	float VectYmn2V(Vector v1);
	float LengthVec();
	Vector(float valuex = 2 , float valuey = 3)
	{
		x = valuex;
		y = valuey;
	}
	Vector(const Vector& obj) //constructor copy
	{
		x = obj.x;
		y = obj.y;
	}
	~Vector()
	{
		std::cout << std::endl << "Destructor"<<std::endl;
	}


};



#endif