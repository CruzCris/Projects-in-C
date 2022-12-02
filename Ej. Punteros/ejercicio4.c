#include <stdio.h>
#include <stdlib.h>
int main() {

    int d,i;
    float *numeros;
    float v, sum, med;

    printf("\nIntroduzca la cantidad de datos: ");
    scanf("%i", &d);

    numeros = malloc(sizeof(float)*d);

    for ( i = 0; i < d; i++){
        printf("\nValor numero %i: ",i);
        scanf("%f", &v);
        *(numeros + i) = v;
    }

    float Vm = *(numeros);
    float VM = *(numeros);

    for ( i = 0; i < d; i++){
        sum += *(numeros + i);
        if(*(numeros + i) < Vm){
            Vm = *(numeros + i);
        }
        if (*(numeros + i) > VM){
            VM = *(numeros + i);
        }
    }

    med = sum / d;
    printf( "EL promedio es: %.3f\n", med );
    printf( "El valor menor es: %.3f\n", Vm );
    printf( "El valor mayor es: %.3f\n", VM );

    return 0;

};