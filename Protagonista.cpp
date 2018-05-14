#include "Protagonista.h"
#include "glut.h"

Protagonista::Protagonista(float hp, float dmg) {
	vida = hp;
	daño = dmg;
}

Protagonista::~Protagonista() {
}

void Protagonista::dibuja() {
	Personajes::dibuja();

	glDisable(GL_LIGHTING);
	//barra de vida
	glColor3ub(0, 227, 0);
	glBegin(GL_POLYGON);
	glVertex3f(-6.0f + posicion.x, 11.5f, 0.0f);
	glVertex3f(-6.0f + posicion.x, 12.0f, 0.0f);
	glVertex3f(-1.0f + posicion.x, 12.0f, 0.0f);
	glVertex3f(-1.0f + posicion.x, 11.5f, 0.0f);
	glEnd();
	//Contorno
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	glVertex3f(-6.05f + posicion.x, 11.455f, 0.0f);
	glVertex3f(-6.05f + posicion.x, 12.05f, 0.0f);
	glVertex3f(-0.975f + posicion.x, 12.05f, 0.0f);
	glVertex3f(-0.975f + posicion.x, 11.455f, 0.0f);
	glEnd();
	glEnable(GL_LIGHTING);
}


void Protagonista::tecla(unsigned char key) {
	if (key == 'd') {
		velocidad.x = 2.0f;
		posicion.x += 0.25f*velocidad.x;
		velocidad.x = 0;
	}
	if (key == 'a') {
		velocidad.x = 2.0f;
		posicion.x -= 0.25f*velocidad.x;
		velocidad.x = 0;
	}
	if (key == 's') {
		velocidad.z = 2.0f;
		posicion.z += 0.25f*velocidad.z;
		velocidad.z = 0;
	}
	if (key == 'w') {
		velocidad.z = 2.0f;
		posicion.z -= 0.25f*velocidad.z;
		velocidad.z = 0;
	}
}

//void Protagonista::mueve(float t) {
//	Personajes::mueve(t);
//}
//
//
//void Protagonista::setPos(float px, float py, float pz) {
//	Personajes::setPos(px, py, pz);
//}
//
//void Protagonista::setVel(float vx, float vy, float vz) {
//	Personajes::setVel(vx, vy, vz);
//}
//
//void Protagonista::setAltura(float h) {
//	Personajes::setAltura(h);
//}
//
//void Protagonista::setVida(float hp) {
//	Personajes::setVida(hp);
//}
//
//void Protagonista::setDmg(float dmg) {
//	Personajes::setDmg(dmg);
//}
//
//float Protagonista::getTamaño() {
//	return Personajes::getTamaño();
//}