#include "Personajes.h"
#include "glut.h"


Personajes::Personajes(){
	aceleracion.y = -9.81f;
}


Personajes::~Personajes()
{
}

void Personajes::dibuja()
{
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, posicion.z);
	glColor3f(0.0f, 255.0f, 0.0f);
	glutSolidSphere(altura, 40, 40);
	glTranslatef(-posicion.x, -posicion.y, -posicion.z);
	glPopMatrix();
}

void Personajes::mueve(float t) { 
	Vector3D Vel = velocidad * t, auxAc = aceleracion * t, Ac = aceleracion * (0.5f * t * t);
	posicion = posicion + Vel + Ac;
	velocidad = velocidad + auxAc;
}


void Personajes::setPos(float px, float py, float pz) {
	posicion.x = px;
	posicion.y = py + altura;
	posicion.z = pz;
}

void Personajes::setVel(float vx, float vy, float vz)
{
	velocidad.x = vx;
	velocidad.y = vy;
	velocidad.z = vz;
}

void Personajes::setAltura(float h) {
	altura = h;
}

float Personajes::getAltura() {
	return altura;
}

Vector3D Personajes::getPos() {
	return posicion;
}

void Personajes::setVida(float hp) {
	vida = hp;
}

void Personajes::setDmg(float dmg) {
	daño = dmg;
}

float Personajes::getTamaño() {
	return altura;
}

float Personajes::getVida() {
	return vida;
}