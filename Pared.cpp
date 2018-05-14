#include "Pared.h"
#include "glut.h"


Pared::Pared()
{
}

Pared::~Pared()
{
}

void Pared::dibuja()
{
	setColor(rojo, verde, azul);

	glDisable(GL_LIGHTING);
	glColor3ub(rojo, verde, azul);
	glBegin(GL_POLYGON);
	glVertex3d(limite1.x, limite1.y, limite1.z);
	glVertex3d(limite1.x, limite1.y, limite2.z);
	glVertex3d(limite2.x, limite2.y, limite2.z);
	glVertex3d(limite2.x, limite2.y, limite1.z);
	glEnd();
	glEnable(GL_LIGHTING);
}

void Pared::setColor(unsigned char r, unsigned char v, unsigned char a) {
	rojo = r;
	verde = v;
	azul = a;
}

void Pared::setPos(float x1, float y1, float z1, float x2, float y2, float z2) {
	limite1.x = x1;
	limite1.y = y1;
	limite1.z = z1;
	limite2.x = x2;
	limite2.y = y2;
	limite2.z = z2;
}

float Pared::distancia(Vector3D punto, Vector3D *direccion)
{
	Vector3D u = (punto - limite1);
	Vector3D v = (limite2 - limite1).unitario();
	float longitud = (limite1 - limite2).modulo();
	Vector3D dir;
	float valor = u * v;
	float distancia = 0;
	if (valor<0)
		dir = u;
	else if (valor>longitud)
		dir = (punto - limite2);
	else {
		Vector3D aux = v * valor;
		dir = u - aux;
	}
	distancia = dir.modulo();
	if (direccion != 0) //si nos dan un vector…
		*direccion = dir.unitario();
	return distancia;
}