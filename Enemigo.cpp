
#include "Enemigo.h"
#include "glut.h"

Enemigo::Enemigo(float hp, float dmg) {
	vida = hp;
	daño = dmg;
}

Enemigo::~Enemigo() {
}

//
//void Enemigo::dibuja() {
//	Personajes::dibuja();
//}
//
//void Enemigo::mueve(float t) {
//	Personajes::mueve(t);
//}
//
//
//void Enemigo::setPos(float px, float py, float pz) {
//	Personajes::setPos(px, py, pz);
//}
//
//void Enemigo::setVel(float vx, float vy, float vz) {
//	Personajes::setVel(vx, vy, vz);
//}
//
//void Enemigo::setAltura(float h) {
//	Personajes::setAltura(h);
//}
//
//void Enemigo::setVida(float hp) {
//	Personajes::setVida(hp);
//}
//
//void Enemigo::setDmg(float dmg) {
//	Personajes::setDmg(dmg);
//}
//
//float Enemigo::getTamaño() {
//	return Personajes::getTamaño();
//}