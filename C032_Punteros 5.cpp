//Programas sobre manejo de memoria
#include<stdio.h>
int main(){
    char palabra1[5];
    char palabra2[5];
    int salir;
    printf("Dime algo: ");
    scanf("%s",palabra1);
    printf("\nDime algo mas: ");
    scanf("%s",palabra2);
    printf("direccion palabra1 = %x ",palabra1);
    printf("palabra1 = %s\n",palabra1);
    printf("direccion palabra2 = %x ",palabra2);
    printf("palabra2 = %s  ",palabra2);
    scanf("%i",&salir);
}
//Introducimos la palabra en la memoria y luego va a esa direccion y nos muestra por pantalla la longitud medida
