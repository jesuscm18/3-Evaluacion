#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>


int main(){
	int salir;
	//Definimos el vector de PUNTEROS
	int nletras;
	int cont;
	char palabra[20];
	char *lista[3];//5 posiciones de memoria que apuntan a 5 palabras
	char *palabra;
	//Procedimiento
	for(cont=0;cont<3;cont++);
	//1. Leo una palabra
	std::cout<<"Palabra: ";
	std::cin>>palabra;
	//2. Averiguo cuántas letras tiene
	nletras=strlen(palabra);
	//3. Reservo memoria para guardar la palabra.
	lista[cont]=malloc(nletras*sizeof(char));
	//4. Escribo la palabra en la memoria resrvada
	strcpy(lista[cont],palabra);
	//5. Volvemos al punto 1.
	
	printf("\nToca cualquier tecla: ");
    scanf("%i",&salir);
}
