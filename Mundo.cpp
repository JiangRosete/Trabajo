#include <math.h>
#include "glut.h"
#include "Mundo.h"



Mundo::Mundo()
{
}

Mundo::~Mundo()
{
}

void Mundo::inicializa() {
	x_ojo = 0;
	y_ojo = 5;
	z_ojo = 22;

	suelo.setColor(166, 100, 240);
	suelo.setPos(-12, 0, 7, 12, 0, -7);

	prota.setPos(-3, 0, 0);
	prota.setVel(0, 0, 0);
	prota.setAltura(1);
	prota.setVida(100);

	

	/*Vector3D pos = prota.getPos();*/
	disparo.setPos(0, 2, 0);	

	bonus.setPos(0, 8, 0);

	
	Enemigo *aux = new Enemigo;
	aux->setPos(0, 8, -5);
	aux->setVel(0, 0, 0);
	aux->setAltura(1);
	enemigos.agregar(aux);

	
}

void Mundo::dibuja() {
	
	gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
		prota.getPos().x + 3, y_ojo, 0.0,      // hacia que punto mira-Hacia la posicion del protagonista 
		0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)    

	prota.dibuja();
	suelo.dibuja();
	/*disparo.dibuja();*/
	bonus.dibuja();
	disparos.dibuja();
	enemigos.dibuja();

}

void Mundo::mueve(float t) {
	prota.mueve(0.025f);
	/*disparo.mueve(0.025f);*/
	bonus.mueve(0.025f);
	disparos.mueve(0.025f);
	/*disparos.destruirContenido();*/
	enemigos.mueve(0.025f);
	Interaccion::contactoPared(suelo, prota, 1);
	enemigos.interaccionPared(suelo);
}

void Mundo::tecla(unsigned char key) {
	prota.tecla(key);
	/*disparo.tecla(key);*/
	switch (key)
	{
	case ' ':
	{
		Disparo* d = new Disparo;
		Vector3D pos = prota.getPos();
		d->setPos(pos.x, pos.y + 1, pos.z);
		disparos.agregar(d);
		break;
	}
	}
}

void Mundo::moverOjo(unsigned char key) {

	//velocidad de movimiento del ojo sincronizado con la posicion del personaje

	if (key == 'd')
		x_ojo += 0.25*2.0;
	if (key == 'a')
		x_ojo -= 0.25*2.0;

}