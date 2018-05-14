#include "Vector3D.h"
#include <cmath>


Vector3D::Vector3D(float xv, float yv, float zv)
{
	x = xv;
	y = yv;
	z = zv;
}

Vector3D::~Vector3D()
{
}

float Vector3D::modulo()
{
	return (float)sqrt(x * x + y * y + z * z);
}

float Vector3D::argumento(Vector3D &v)
{
	float aux1, aux2, aux, num;
	aux1 = modulo();
	aux2 = v.modulo();
	aux = aux1 * aux2;
	num = x * v.x + y * v.y + z * v.z;
	return (float)acos(num / aux);
}

Vector3D Vector3D::unitario()
{
	Vector3D retorno(x, y);
	float mod = modulo();
	if (mod>0.00001)
	{
		retorno.x /= mod;
		retorno.y /= mod;
		retorno.z /= mod;
	}
	return retorno;
}

Vector3D Vector3D::operator - (Vector3D &v)
{
	Vector3D res;
	res.x = x - v.x;
	res.y = y - v.y;
	res.z = z - v.z;
	return res;
}

Vector3D Vector3D::operator *(float real) {
	Vector3D res;
	res.x = x * real;
	res.y = y * real;
	res.z = z * real;
	return res;
}

Vector3D Vector3D::operator +(Vector3D &v)
{
	Vector3D res;
	res.x = x + v.x;
	res.y = y + v.y;
	res.z = z + v.z;
	return res;
}

float Vector3D::operator *(Vector3D &v) {
	float res;
	res = (float)modulo()*v.modulo()*cos(argumento(v));
	return res;
}

bool Vector3D::operator==(Vector3D &v) {
	if (x == v.x&&y == v.y&&z == v.z)
		return true;
	return false;
}
