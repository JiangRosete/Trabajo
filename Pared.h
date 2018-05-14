#pragma once
#include "Vector3D.h"

class Pared
{
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;

	Vector3D limite1;
	Vector3D limite2;

public:
	Pared();
	virtual ~Pared();
	void dibuja();
	void setColor(unsigned char rojo, unsigned char verde, unsigned char azul);
	void setPos(float x1, float y1, float x2, float y2, float z1, float z2);
	float distancia(Vector3D punto, Vector3D *direccion = 0);	friend class Interaccion;
};
