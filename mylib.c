#include<stdlib.c>

static struct Terra* ultima_terra=NULL;
static struct Terra* percorso=NULL;
static struct Oberon oberon;

void crea_percorso() {
  int b=0,c;
  do{
    system("clear");
    printf("1) Inserisci terra\n");
    printf("2) Cancella terra\n");
    printf("3) Stampa percorso\n");
    printf("4) Chiudi percorso\n");
    scanf("%d", &c);
    switch c: {
      case 1:{ins_terra(); break;}
      case 2:{canc_terra(); break;}
      case 3:{apri_percorso(); break;}
      case 4:{chiudi_percorso(); break;}
      default:{system("clear"); printf("Comando errato");}
      
      
    
  }while(b==0);
