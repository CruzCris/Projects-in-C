#include <stdio.h>
#include <stdlib.h>

int main() {
    int tvec,*vector;
    int n = rand();

    printf("\nIngrese el tamano del vector: ");
    scanf("%d", &tvec);
    
    vector=(int *) malloc(sizeof(int)*tvec);

    for (int i = 0; i < tvec; i++){
        *(vector + i) = n;
        printf("\nValor aleatorio %d es %d \n",i,n);
        n = rand();
    }

    free(vector);
    return 0;
};