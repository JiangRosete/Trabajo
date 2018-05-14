#pragma once
#include "Enemigo.h"
#include "Pared.h"
#define MAX_ENEMIGOS 6

class ListaEnemigos {
private:
	int numero;
	Enemigo *lista[MAX_ENEMIGOS];
public:
	ListaEnemigos();
	~ListaEnemigos();
	bool agregar(Enemigo* e);
	void destruirContenido();
	void mueve(float t);
	void dibuja();
	void interaccionPared(Pared suelo);
};