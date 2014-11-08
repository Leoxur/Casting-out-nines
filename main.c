#include "radice_numerica.h"
#include <stdio.h>
#include <stdlib.h>

int main () {

	regole();
	inserisci ();
	inizializza ();
		do{
			AN = radice_numero(AN);
			BN = radice_numero(BN);
			RN = radice_numero(RN);
		} while (AN > 9 || BN > 9);
	stampa_radici ();
	stampa_prodotto ();
	return 0;
}
