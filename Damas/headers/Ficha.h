#pragma once
#include "Vector2D.h"

class Ficha
{
	friend class Interaccion;
	Vector2D posicion;
	unsigned char color; // 'b' para blanco 'n' para negro
	Ficha();
	virtual~Ficha();

};
