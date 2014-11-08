#include "radice_numerica.h"
#include <stdio.h>
#include <stdlib.h>

void inserisci (){

	int max_long = 0;
	printf("Inserisci 2 numeri di massimo 4 cifre\n\n");
		do{
			scanf(" %d", &a);
			scanf(" %d", &b);
			if(a > 9999 || b > 9999){
				printf("Attenzione: input non valido.\n");
				max_long = 1;
			}
			else
				max_long = 0;
		  }while  (max_long == 1);
}

int radice_numero (int a){

    int buffer = 0;
			while (a != 0){
				buffer = buffer + (a % 10);
				a = a /10;
			}
	return (buffer % 10) + (buffer / 10);
}

void inizializza (){

		AN = a;
		BN = b;
		RN = a * b;
}
void stampa_radici (){

	printf("\n\tRadici:\n\t-1 Numero: %d\n \t-2 Numero: %d\n \t-Radice Prodotto: %d\n", AN, BN, RN);
}

void stampa_prodotto (){

	PRD = AN * BN; //prodotto tra le radici numeriche
	printf("\nIl Prodotto tra le radici numeriche:\n\t\t %d X %d = %d\n", AN, BN, PRD);
		while (PRD > 9){
			PRD = radice_numero(PRD);
			printf("\tOvvero  %d\n", PRD);
		}
	controllo();
}

void controllo (){

	if ( radice_numero(RN) != PRD)
		printf ("\nIl risultato è senz'altro errato\n");
	else
		printf("\nIl risultato è probabilmente corretto\n");
}

void regole (){

	printf("\n\n#------------------------------REGOLE------------------------------------#\n");
	printf("# La prova del nove è un test di controllo che verifica l'esattezza      #\n# del risultato di un'operazione aritmetica tra numeri interi attraverso #\n# il raffronto delle radici numeriche degli operandi e del risultato.    #\n");
	printf("#------------------------------------------------------------------------#\n\n");
}
