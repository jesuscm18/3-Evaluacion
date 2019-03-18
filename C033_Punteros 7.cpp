//Manejo de punteros
#include<stdio.h>
#include<stdlib.h>

int main(){
     char *lista[3];
     int salir;
     lista[0]=(char *) malloc(8*sizeof(char)); 
     lista[1]=(char *) malloc(7*sizeof(char));
     lista[2]=(char *) malloc(9*sizeof(char)); 
     printf("\nPrimer rey mago: ");
     scanf("%s",lista[0]);
     printf("\nSegundo rey mago: ");
     scanf("%s",lista[1]);     
     printf("\nTercero rey mago: ");
     scanf("%s",lista[2]);
     printf("\nLOS TRES REYES MAGOS SON: ");
     printf("%s, ",lista[0]);
     printf("%s y ",lista[1]);
     printf("%s",lista[2]);
     printf("\nToca cualquier tecla: ");
     scanf("%i",&salir);
}
//genera una matriz en la que se introducen los nombres de los reyes magos
//luego para cada numero de rey se extrae un dato de la matriz
//de esta forma cada rey tiene asignado su numero
