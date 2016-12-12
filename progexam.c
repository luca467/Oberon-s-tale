#include<stdio.h>
#include<stdlib.h>
#include"mylib.h"

int main(){
  int b=0,c;
  system("clear");
  do{
    printf("1) Crea percorso\n");
    printf("2) Muovi Oberon\n");
    printf("3) Termina gioco\n");
    scanf("%d",c);
    switch (c){
      case 1{
        crea_percorso();
        break;
      }
      case 2{
        muovi_oberon();
        break;
      }
      case 3{
        termina_gioco();
      }
      default{
        system("clear");
        printf("Comando errato\n");
        
      }
    }
  }while(b==0);
  return 0;
}
