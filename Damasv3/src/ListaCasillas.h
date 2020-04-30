#pragma once
#include "Casilla.h"
#include "Interaccion.h"
#include "ListaFichas.h"

#define NUMERO_DE_CASILLAS 32
#define NUMERO_DE_FILAS 8
#define NUMERO_DE_COLUMNAS 8

class ListaCasillas
{
public:
	ListaCasillas();
	virtual~ListaCasillas();
	void Agregar(); //TODO- Agregar los mismos métodos para listafichas que coloquen las fichas en sus posiciones iniciales
	void Destruir();


	void Estado(); //Actualiza el atributo 'estado' de todas las casillas con doble bucle
private:
	Casilla* listacasillas[NUMERO_DE_CASILLAS];
	int numero;
	Ficha* listafichas[NUMERO_DE_FICHAS];
};

