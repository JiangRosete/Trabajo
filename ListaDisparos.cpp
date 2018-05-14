
#include "ListaDisparos.h"



ListaDisparos::ListaDisparos()
{
	numero = 0;
	for (int i = 0; i<MAX_DISPAROS; i++)
		lista[i] = 0;
}


ListaDisparos::~ListaDisparos()
{
}

bool ListaDisparos::agregar(Disparo *d) {
	if (numero < MAX_DISPAROS) {
		lista[numero++] = d;
	}
	else
		return false;
	return true;
}

void ListaDisparos::destruirContenido()
{
	//No funciona bien. Revisar
	for (int i = 0; i < numero; i++) {
		if ((lista[i]->distanciaDisparo()) >= 5.0) {
			delete lista[i];
			numero--;
		}
	}
}

void ListaDisparos::dibuja()
{
	for (int i = 0; i<numero; i++)
		lista[i]->dibuja();
}

void ListaDisparos::mueve(float t)
{
	for (int i = 0; i<numero; i++)
		lista[i]->mueve(t);
}

//void ListaDisparos::colision(Bonus b) {
//	/*for (int i = 0; i<numero; i++)
//	{
//		if (Interaccion::colision(*(lista[i]), p))
//			(*(lista[i])).setVel(0, 0);
//	}*/
//}

