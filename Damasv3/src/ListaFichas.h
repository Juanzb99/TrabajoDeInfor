#pragma once
#include "Ficha.h"
#define NUMERO_DE_FICHAS 16

class ListaFichas
{
public:
	friend class ListaCasillas;
	ListaFichas();
	virtual~ListaFichas();

private:
	Ficha* listafichas[NUMERO_DE_FICHAS];
	int numero;
};

