#include "ListaCasillas.h"

ListaCasillas::ListaCasillas()
{
}

ListaCasillas::~ListaCasillas()
{
}

void ListaCasillas::Agregar()
{
	//TODO-este m�todo tiene que construir el tablero con todas sus posiciones
	//esperar por si este m�todo lo hacen los del departamento de dise�o de MOSTROS S.A
}

void ListaCasillas::Estado()
{
	for (int i = 0; i < NUMERO_DE_CASILLAS - 1; i++) {
		for (int j = 0; j < NUMERO_DE_FICHAS - 1; j++) {
			Interaccion::Estado(*listacasillas[i], *listafichas[j]);
		}
	}
}
