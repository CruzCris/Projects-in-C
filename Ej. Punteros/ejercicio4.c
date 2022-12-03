#include <stdio.h>
#include <stdlib.h>
int main() {

    int nd,i;
    float *numeros;
    float v, suma, promedio;

    printf("\nIntroduzca la cantidad de datos: ");
    scanf("%i", &nd);

    numeros = malloc(sizeof(float)*nd);

    for ( i = 0; i < nd; i++){
        printf("\nValor numero %i: ",i);
        scanf("%f", &v);
        *(numeros + i) = v;
    }

    float vme = *(numeros);
    float vma = *(numeros);

    for ( i = 0; i < nd; i++){
        suma += *(numeros + i);
        if(*(numeros + i) < vme){
            vme = *(numeros + i);
        }
        if (*(numeros + i) > vma){
            vma = *(numeros + i);
        }
    }

    promedio = suma / nd;
    printf( "\nEL promedio es: %.3f\n", promedio);
    printf( "El valor menor es: %.3f\n", vme);
    printf( "El valor mayor es: %.3f\n", vma);

    return 0;

};