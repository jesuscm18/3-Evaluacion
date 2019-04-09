#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int contar_vocales(char palabra[]){
      int n_vocales=0;
    int cont=0;
    while(palabra[cont]!='\0'){
          if(palabra[cont]=='a' || palabra[cont]=='e' || palabra[cont]=='i'|| palabra[cont]=='o'|| palabra[cont]=='u') {
             n_vocales++;
          }             
          cont++;  
    }      

      return(n_vocales);           
}

int main(){
	int salir;
	int cont, nletras;
	char *lista[5];//5 posiciones de memoria que apuntan a 5 palabras
	char palabra[30];
	char *p_aux;
	int nveces;
	int rep;
	char mayor,menor;
	for(cont=0;cont<5;cont++){
        cout<<"Palabra "<<cont+1<<": ";
        cin>>palabra;
	    nletras=strlen(palabra);
        lista[cont]=(char *) malloc(nletras*sizeof(char));
        strcpy(lista[cont],palabra);
        }
    cout<<"\nLista sin ordenar:\n\n";
    for(cont=0;cont<5;cont++){
        cout<<lista[cont]<<" tiene "<<contar_vocales(lista[cont])<<" vocales\n";
    }
     
	//Repasamos la lista ordenando las palabras
	cout<<"\nPrimero mayor o primero menor?: \n";
	cout<<"Si quiere ordenar de menor a mayor pulse 1 \n";
	cout<<"Si quiere ordenar de mayor a menor pulse 2: \n";
    cin>>rep;
    if(rep==1);
    for(nveces=1;nveces<5;nveces++){
      for(cont=0;cont<4;cont++){
        //cout<<"\nComparo " << lista[cont]<<" con "<<lista[cont+1];
       if(contar_vocales(lista[cont])>contar_vocales(lista[cont+1])){
              //cout<<"\nCambio" << lista[cont]<<" con "<<lista[cont+1];                                                        
             p_aux=lista[cont];
             lista[cont]=lista[cont+1];
             lista[cont+1]=p_aux; 
      }                            
     }
    } 
    if(rep==2);
    for(nveces=1;nveces<5;nveces++){
      for(cont=0;cont<4;cont++){
        //cout<<"\nComparo " << lista[cont]<<" con "<<lista[cont+1];
       if(contar_vocales(lista[cont])<contar_vocales(lista[cont+1])){
              //cout<<"\nCambio" << lista[cont]<<" con "<<lista[cont+1];                                                        
             p_aux=lista[cont];
             lista[cont]=lista[cont+1];
             lista[cont+1]=p_aux; 
      }                            
     }
    } 
	 //LISTA ORDENADA
    cout<<"\nLista ordenada:\n";
    for(cont=0;cont<5;cont++){
        cout<<lista[cont]<<"\n";
        } 
	 
	cout<<"\nToca cualquier tecla: ";
    cin>>salir;
}
