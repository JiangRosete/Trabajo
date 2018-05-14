#pragma once
#include "Vector3D.h"

class Bonus
{
public:
	Bonus();
	virtual ~Bonus();
	void dibuja();
	void mueve(float num);
	void setPos(float ix, float iy, float iz);

private:
	Vector3D posicion;
	Vector3D velocidad;
	Vector3D aceleracion;
	float lado;
	
	friend class Interaccion;

};