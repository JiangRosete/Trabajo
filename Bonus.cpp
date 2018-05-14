#include <stdlib.h>
#include "Bonus.h"
#include "glut.h"

void Bonus::dibuja() {
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0);
	glRotatef(30, 1, 1, 1);
	glColor3f(rand() / (float)RAND_MAX, rand() / (float)RAND_MAX, rand() / (float)RAND_MAX);
	glutSolidCube(lado);
	glPopMatrix();
}

void Bonus::mueve(float t) {
	Vector3D Vel = velocidad * t, auxAc = aceleracion * t, Ac = aceleracion * (0.5f*t*t);
	if (posicion.x >= 12.0f) {
		posicion.x = -12.0f;
	}
	else {
		posicion = (posicion + Vel + Ac);
	}
	velocidad = (velocidad + auxAc);
}

Bonus::Bonus()
{
}


Bonus::~Bonus()
{
}

void Bonus::setPos(float ix, float iy, float iz) {
	posicion.x = ix;
	posicion.y = iy;
	posicion.z = iz;
	aceleracion.y = 0;
	velocidad.y = -3.0;
	lado = 0.3f;
}

