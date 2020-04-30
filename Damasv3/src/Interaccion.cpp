#include "Interaccion.h"

Interaccion::Interaccion()
{
}

Interaccion::~Interaccion()
{
}

void Interaccion::Estado(Casilla& c, Ficha& f)
{
	if (c.posicion.x == f.posicion.x && c.posicion.y == f.posicion.y) {
		if (f.color == 'b') {
			c.estado = 1;
		}
		if (f.color == 'n') {
			c.estado = 2;
		}
	}
	else { c.estado = 0; }
}
