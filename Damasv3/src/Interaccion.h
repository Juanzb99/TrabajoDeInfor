//en la clase algoritmo la ficha pregunta a las casillas a las que se puede mover su estado
//estas le devueven 0 si casilla vacia 1 si ficha blanca 2 si ficha negra
//luego si es ficha blanca se pergunta a la casilla posterior su estado por si es 0 la ficha esta obigada a saltar comiendo a la blanca
//
//La clase Interaction gestiona la relacion entre fichas y casillas, ListaCasillas usa metodos de Interaccion para comprobar el estado de sus casillas

#pragma once
#include "Ficha.h"
#include "Casilla.h"
#include "Vector2D.h"

class Interaccion
{
public:
	Interaccion();
	virtual ~Interaccion();

	static void Estado(Casilla& c, Ficha& f); //esta funcion será impementada en ListaCasillas en un bucle

};