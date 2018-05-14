#pragma once
#include "Vector3D.h"

class Disparo
{
	Vector3D posicion;
	Vector3D velocidad;
	Vector3D aceleracion;
	Vector3D origen;//Para determinar la distancia que ha recorrido el disparo
	float radio;

public:
	Disparo();
	virtual ~Disparo();
	void dibuja();
	void mueve(float t);
	void tecla(unsigned char key);
	void setPos(float ix, float iy, float iz);
	void setVel(float vx, float vy, float vz);
	float getRadio();
	Vector3D getPos();
	float distanciaDisparo();
	friend class Interaccion;

};