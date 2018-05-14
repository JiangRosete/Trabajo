#pragma once

class Vector3D
{
public:

	Vector3D(float xv = 0.0f, float yv = 0.0f, float zv = 0.0f);
	virtual ~Vector3D();
	float modulo(); // (2) modulo del vector
	float argumento(Vector3D &); // (3) argumento del vector
	Vector3D unitario(); // (4) devuelve un vector unitario
	Vector3D operator - (Vector3D &); // (5) resta de vectores
	Vector3D operator + (Vector3D &); // (6) suma de vectores
	float operator *(Vector3D &); // (7) producto escalar
	Vector3D operator *(float); // (8) producto por un escalar 
	bool operator==(Vector3D &);
	float x;
	float y;
	float z;
};