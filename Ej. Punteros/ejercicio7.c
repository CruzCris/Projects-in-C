#include<stdio.h>
#include<stdlib.h>

int main(){
    char **matriz,caracter,a;
    int tam;

    printf("Ingrese el tamano de filas y columnas: ");
    scanf("%d",&tam);
    printf("Ingrese el caracter de relleno: ");
    scanf(" %c",&caracter);

    matriz=(char **) malloc(sizeof(char*)*tam);

    for(int i=0; i<tam; i++){
        *(matriz+i)=(char*) malloc(sizeof(char)*tam);
        a = i+'0';
        for(int j=0; j<tam; j++){
            if (i==j){
                *(*(matriz+i)+j)=a;
            } else{
                *(*(matriz+i)+j)=caracter;
            }
        }
    }
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++){
            printf("  %c",*(*(matriz+i)+j));
        }
        printf("\n");
    }
    for(int i=0; i<tam; i++){
        free(*(matriz+i));
    }
    return 0;
}