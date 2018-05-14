#include "Enemigo.h"
#include "ListaEnemigos.h"
#include "Interaccion.h"
#define MAX_ENEMIGOS 6

ListaEnemigos::ListaEnemigos() {
	numero = 0;
	for (int i = 0; i<MAX_ENEMIGOS; i++)
		lista[i] = 0;
}

bool ListaEnemigos::agregar(Enemigo *e) {
	if (numero < MAX_ENEMIGOS) {
		lista[numero++] = e;
		return true;
	}
	return false;
}
void ListaEnemigos::destruirContenido() {
	//Borrado si se queda sin vida
	for (int i = 0; i < numero; i++) {
		if (lista[i]->getVida() <= 0.0) {
			delete lista[i];
			numero--;
		}
	}
}
void ListaEnemigos::mueve(float t) {
	for (int i = 0; i < numero; i++)
		lista[i]->mueve(t);
}
void ListaEnemigos::dibuja() {
	for (int i = 0; i < numero; i++)
		lista[i]->dibuja();
}

ListaEnemigos::~ListaEnemigos() {
	//Borrado total
	for (int i = 0; i < numero; i++) {
		delete lista[i];
	}
	numero = 0;
}

void ListaEnemigos::interaccionPared(Pared suelo) {
	for (int i = 0; i < numero; i++) {
		Interaccion::contactoPared(suelo, *(lista[i]), 1);
	}
}