#pragma once
#include "Personajes.h"

class Enemigo : public Personajes {
public:
	Enemigo(float hp = 100, float dmg = 10);
	virtual ~Enemigo();
	//void dibuja();
	//void mueve(float t);
	//void setPos(float px, float py, float pz);
	//void setVel(float vx, float vy, float vz);
	//void setAltura(float h);
	//void setVida(float hp);
	//void setDmg(float dmg);
	//float getTamaño();

	friend class Interaccion;

};