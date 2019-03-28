#include<stdlib.h>
#include<string.h>
#include<iostream>

int main(){
	int salir;
	//Definimos el vector de PUNTEROS
	int nletras;
	char palabra[20];
	char *lista[5];//5 posiciones de memoria que apuntan a 5 palabras
	//Procedimiento
	//1. Leo una palabra
	std::cout<<"Palabra: ";
	std::cin>>palabra;
	//2. Averiguo cuántas letras tiene
	nletras=strlen(palabra);
	//3. Reservo memoria para guardar la palabra.
	lista[0]=(char*)malloc(nletras*sizeof(char));
	//4. Escribo la palabra en la memoria resrvada
	//5. Volvemos al punto 1.
	std::cout<<"Palabra: ";
	std::cin>>palabra;
	lista[1]=(char*)malloc(nletras*sizeof(char));
	std::cout<<"Palabra: ";
	std::cin>>palabra;
	lista[2]=(char*)malloc(nletras*sizeof(char));
	std::cout<<"Palabra: ";
	std::cin>>palabra;
	lista[3]=(char*)malloc(nletras*sizeof(char));
	std::cout<<"Palabra: ";
	std::cin>>palabra;
	lista[4]=(char*)malloc(nletras*sizeof(char));
	printf("\nToca cualquier tecla: ");
    scanf("%i",&salir);
}
