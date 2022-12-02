#include <stdio.h>
#include <stdlib.h>

float promedio(float *cal) {
    float suma = 0;
    for (int i = 0; i < 10; i++ ) {
        suma = suma + *(cal + i);
    };
    suma = suma / 10;
    return suma;
};

int main() {
    float **cal, calificacion;
    cal = (float **)malloc(3*sizeof(float *));
    int i;
    for(i = 0; i < 3; i++){
        *(cal+i) = (float *)malloc(10*sizeof(float));
    }
    for(i = 0; i < 3; i++){
        printf("\nMateria %d\n",i);
        for (int j = 0; j < 10; j++){
            printf("\nIntroduzca la calificacion del alumno %d : ", j+1);
            scanf("%f", &calificacion);
            *(*(cal+i)+j) = calificacion;
        }
    }
    int j = 0;
    for (i = 0; i < 3; i++){
        printf("\nEl promedio de la materia %d es: %f", i, promedio(*(cal+i)+j));
    }
    return 0;
    free(cal);
};