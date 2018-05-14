#pragma once
#include "Vector3D.h"

class Personajes
{
protected:
	float altura;
	float vida;
	float daño;
	Vector3D posicion;
	Vector3D velocidad;
	Vector3D aceleracion;

public:
	Personajes();
	virtual ~Personajes();
	void dibuja();
	void mueve(float t);
	void setPos(float px, float py, float pz);
	void setVel(float vx, float vy, float vz);
	void setAltura(float h);
	void setVida(float hp);
	void setDmg(float dmg);

	float getVida();
	Vector3D getPos();
	float getAltura();
	float getTamaño();
	friend class Interaccion;
};

