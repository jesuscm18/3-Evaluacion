#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
	int salir;
	int cont, nletras;
	char *lista[3];//5 posiciones de memoria que apuntan a 5 palabras
	char palabra[30];
	for(cont=1;cont<=3;cont++){
        cout<<"Palabra "<<cont<<": ";
        cin>>palabra;
	    nletras=strlen(palabra);
        lista[cont]=(char *) malloc(nletras*sizeof(char));
        strcpy(lista[cont],palabra);
        }
    cout<<"Lista sin ordenar:\n";
    for(cont=1;cont<=3;cont++){
        cout<<lista[cont]<<"\n";
        }
	
	printf("\nToca cualquier tecla: ");
    scanf("%i",&salir);
}
