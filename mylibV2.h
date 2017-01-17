#include <stdio.h>

void crea_percorso();
void ins_terra();
void canc_terra();
void stampa_percorso();
void chiudi_percorso();

//Definisco la struttura per il personaggio Oberon
struct Oberon {
	short borsa_oro;
	short punti_ferita;
	short incantesimi;
	short pozione_guaritrice;};

enum Tipo_terra {
  	             deserto,
  	             foresta,
 	               palude,
  	             villaggio,
  	             pianura
                }

enum Tipo_mostro {
  	              nessuno,
  	              scheletro,
  	              lupo,
  	              orco,
 	                drago
                 }


//Definisco la struttura per le terre
struct Terra {
	int Tipo_terra;
	int Tipo_mostro;
	short tesoro;
	struct Terra* next;};
