#pragma once
#include "Pared.h"
#include "Disparo.h"
#include "ListaDisparos.h"
#include "Personajes.h"
#include "Bonus.h"
#include "Enemigo.h"
#include "Protagonista.h"
#include "Interaccion.h"
#include "ListaEnemigos.h"

class Mundo {
	float x_ojo;
	float y_ojo;
	float z_ojo;
	float posicionx = 0.0f, posiciony = 0.0f, posicionz = 0.0f;

	Pared suelo;
	Disparo disparo;
	Protagonista prota;
	Enemigo enemigo;
	Bonus bonus;
	ListaDisparos disparos;
	ListaEnemigos enemigos;

public:
	Mundo();
	~Mundo();

	void inicializa();
	void dibuja();
	void mueve(float t);
	void tecla(unsigned char key);
	void moverOjo(unsigned char key);

};