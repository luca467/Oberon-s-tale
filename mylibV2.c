#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "mylib.h"

static struct Terra *head = NULL;
static struct Terra *lastland = NULL;

void crea_percorso(){

	int t, x;
	
	do{
	printf("Cosa vuoi fare?\n"      
               "1) Inserisci Terra\n"
	       "2) Cancella Terra\n"
	       "3) Stampa Percorso\n"
	       "4) Torna indietro\n");

	scanf("%d", &t);
	switch (t){

	case 1: ins_terra();
		x=2;
		break;

	case 2: canc_terra();
		x=2;
		break;

	case 3: stampa_percorso();
		x=2;
		break;

	case 4: chiudi_percorso();
		x=1;
		break;

	default:printf("Hai inserito un comando sbagliato .-.\n");
		x=2;
		break;}
	}
	while(x == 2);


void ins_terra(){
	
	int tt, tm;
	short int ts;		
				
	do{
	printf("Che Terra vuoi inserire?\n"
	       "0) Deserto 1) Foresta 2) Palude 3) Villaggio 4) Pianura\n");
	scanf("%d", &tt);
	if(tt>4){
	printf("Hai sbagliato comando\n");}
	}
	while(tt>3);

	do{
	printf("Che mostro vuoi inserire?\n"
	       "0) Nessuno 1) Scheletro 2) Lupo 3) Orco 4) Drago\n");
	scanf("%d", &tm);
	if(tm>4){
	printf("Hai sbagliato comando\n");}
	}
	while(tm>3);

	do{
	printf("Quanto oro vuoi inserire in questa terra? N.B. Il massimo è 200\n");
	scanf("%hd", &ts);
	if(ts>200){
	printf("Il tesoro è troppo grande!\n");}
	}
	while(ts>200);			

	if(head==NULL){
		head =  malloc(sizeof(struct Terra));
		head->Tipo_terra = tt;
		head->Tipo_mostro= tm;
		head->tesoro = ts;
		head->next = NULL;}

	else{	
		struct Terra *lastland = head;
		while(lastland->next != NULL){
			lastland = lastland ->next;}
		
		lastland->next = malloc(sizeof(struct Terra));	
		lastland->next->Tipo_terra = tt;
		lastland->next->Tipo_mostro= tm;
		lastland->next->tesoro = ts;
		lastland->next->next = NULL;}
		}
	}
 

void canc_terra(){
	
	if(head == NULL){
		printf("Non hai inserito ancora nessuna Terra.\n");}

	if(head->next == NULL){
		free(head);}

	else{

	struct Terra *current = head;
	
	while(current->next->next != NULL){ //arriva in fondo alla lista
		current = current->next;}

	free(current->next);
	current->next = NULL;}
	}


void stampa_percorso(){
	
	struct Terra *pp = head;	

	if(pp == NULL){
		printf("Non hai creato nessuna Terra\n");}

	else{
		do{
			printf("\n%d, %d, %hd\n\n", pp->Tipo_terra, pp->Tipo_mostro, pp->tesoro);
			pp = pp->next;}	
			while(pp != NULL);
	    } 
	}
