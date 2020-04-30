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

//prueba que ha hecho pablo para aprender a modificar cosas desde su pc