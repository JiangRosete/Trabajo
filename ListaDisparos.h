#pragma once
#define MAX_DISPAROS 10
#include "Disparo.h"
#include "Pared.h"
#include "Bonus.h"

class ListaDisparos
{
public:
	ListaDisparos();
	virtual ~ListaDisparos();
	bool agregar(Disparo* d);
	void destruirContenido();
	void mueve(float t);
	void dibuja();
	//void colision(Bonus b);???

private:
	Disparo * lista[MAX_DISPAROS];
	int numero;
};
