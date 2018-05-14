#pragma once
#include "Personajes.h"

class Protagonista : public Personajes {
public:
	Protagonista(float hp = 500, float dmg = 50);
	virtual ~Protagonista();
	void dibuja();
	//void mueve(float t);
	//void setPos(float px, float py, float pz);
	//void setVel(float vx, float vy, float vz);
	//void setAltura(float h);
	//void setVida(float hp);
	//void setDmg(float dmg);
	//float getTamaño();
	void tecla(unsigned char key);

	friend class Interaccion;
	friend class Disparo;
};
