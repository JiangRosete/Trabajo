#include "Interaccion.h"
#include <math.h>

Interaccion::Interaccion()
{
}


Interaccion::~Interaccion()
{
}

bool Interaccion::colision(Protagonista prota, Enemigo enemigo) {
	float distancia = (prota.posicion - enemigo.posicion).modulo();
	if ((distancia < prota.getTamaño()) || (distancia < enemigo.getTamaño()))
		return true;
	return false;
}

bool Interaccion::colision(Protagonista prota, Bonus bonus) {
	return false;
}

bool Interaccion::colision(Disparo disparo, Enemigo enemigo) {
	if (disparo.posicion == enemigo.posicion) {
		enemigo.vida -= 50;
		return true;
	}
	return false;
}

bool Interaccion::colision(Disparo disparo, Bonus bonus) {
	return false;
}

bool Interaccion::contactoPared(Pared p, Personajes &pers, int orientacion) {
	switch (orientacion) {
	case 1:
		if (pers.posicion.y <= p.limite1.y) {
			pers.posicion.y = p.limite1.y;
			return true;
		}
		break;
	case 2:
		if (pers.posicion.x <= p.limite1.x) {
			pers.posicion.x = p.limite1.x;
			return true;
		}
		break;
	case 3:
		if (pers.posicion.z <= p.limite1.z) {
			pers.posicion.z = p.limite1.z;
			return true;
		}
		break;
	}
	return false;
}