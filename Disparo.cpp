
#include "Disparo.h"
#include "glut.h"
#include "Protagonista.h"

Protagonista prota;
Disparo::Disparo()
{
	//Cuando se crea el objeto se inicializa el origen con la posicion actual del protagonista
	origen.x = prota.posicion.x;
	origen.y = prota.posicion.y;
	origen.z = prota.posicion.z;
}

Disparo::~Disparo()
{
}

void Disparo::dibuja() {
	glColor3f(0.0f, 0.0f, 255.0f);
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, posicion.z);
	glutSolidSphere(radio, 40, 40);
	glPopMatrix();
}

void Disparo::mueve(float t) {
	Vector3D Vel = velocidad * t, auxAc = aceleracion * t, Ac = aceleracion * (0.5f*t*t);
	posicion = (posicion + Vel + Ac);
	velocidad = (velocidad + auxAc);

}

void Disparo::tecla(unsigned char key) {
	if (key == ' ') {
		velocidad.x = 3.0f;
	}
}

void Disparo::setPos(float ix, float iy, float iz) {
	posicion.x = ix;
	posicion.y = iy;
	posicion.z = iz;

	aceleracion.x = 0;
	aceleracion.y = 0;
	aceleracion.z = 0;
	velocidad.x = 3.0f;
	velocidad.y = 0;
	velocidad.z = 0;
	radio = 0.25f;
}

void Disparo::setVel(float vx, float vy, float vz) {
	velocidad.x = vx;
	velocidad.y = vy;
	velocidad.z = vz;
}

float Disparo::getRadio() {
	return radio;
}

Vector3D Disparo::getPos() {
	return posicion;
}

float Disparo::distanciaDisparo() {
	return (posicion - origen).modulo();
}