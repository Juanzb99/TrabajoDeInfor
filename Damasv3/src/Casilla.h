#pragma once
#include "Vector2D.h"

class Casilla
{
private:
	friend class Interaccion;
	Vector2D posicion;
	int estado;

public:
	Casilla();
	Casilla(Vector2D pos);
	virtual ~Casilla();

};

