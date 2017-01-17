#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "mylib.h"

int main () {

printf(" ___________________________________________________________\n"		
	"|----------------MAGO OBERON CALZINO BUCATO-----------------|\n"  
	"|In questo gioco si dovrà condurre il Mago Oberon attraverso|\n"
	"|varie terre, con lo scopo di farlo arrivare sano e salvo a |\n"
	"|casa.                                                      |\n"
	"|___________________________________________________________|\n");

printf("\n");
		
printf(" _________________________________________________\n");
printf("|                                                 |\n");
printf("| COSA VUOI FARE?                                 |\n");
printf("| (Digita 1, 2, o 3 a seconda dell'opzione scelta)|\n");
printf("|                                                 |\n");
printf("| 1) Crea Percorso.                               |\n");
printf("|                                                 |\n");
printf("| 2) Muovi Oberon.                                |\n");
printf("|                                                 |\n");
printf("| 3) Termina Gioco.                               |\n");
printf("|_________________________________________________|\n");

	int a;
	int b;
	do{
	scanf("%d", &a);
	switch (a){

	case 1: crea_percorso();
		b=2;
	        break;

	case 2: printf("Appena implementerò la funzione, muoverai Oberon.\n");
		b=2;
		break;

	case 3: printf("Cattivone! Te ne vai di già... :(\n");
		b=1;
		break;

	default: printf("ERROR: Scelta non vailda.\n");
		 b=2;
		 break;}
		}
	while(b==2);

	return 0;}
