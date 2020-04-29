#include "ListaCasillas.h"

ListaCasillas::ListaCasillas()
{
}

ListaCasillas::~ListaCasillas()
{
}

void ListaCasillas::Agregar()
{
	//TODO-este método tiene que construir el tablero con todas sus posiciones
	//esperar por si este método lo hacen los del departamento de diseño de MOSTROS S.A
}

void ListaCasillas::Estado()
{
	for (int i = 0; i < NUMERO_DE_CASILLAS - 1; i++) {
		for (int j = 0; j < NUMERO_DE_FICHAS - 1; j++) {
			Interaccion::Estado(*listacasillas[i], *listafichas[j]);
		}
	}
}
