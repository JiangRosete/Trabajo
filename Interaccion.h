#pragma once
#include "Protagonista.h"
#include "Enemigo.h"
#include "Bonus.h"
#include "Disparo.h"
#include "Personajes.h"
#include "Pared.h"

class Interaccion {
public:
	Interaccion();
	virtual ~Interaccion();

	static bool colision(Protagonista prota, Enemigo enemigo);
	static bool colision(Protagonista prota, Bonus bonus);
	static bool colision(Disparo disparo, Enemigo enemigo);
	static bool colision(Disparo disparo, Bonus bonus);//???Razon de esto???
	static bool contactoPared(Pared p, Personajes &pers,int orientacion);//1-plano XZ, 2-plano YZ, 3-plano XZ
};