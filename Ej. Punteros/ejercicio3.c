#include <stdio.h>
#include <stdlib.h>

int main() {
    int tvec,*vec;
    int r = rand();

    printf("\nIngrese el tamano del vector: ");
    scanf("%d", &tvec);
    
    vec=(int *) malloc(sizeof(int)*tvec);

    for (int i = 0; i < tvec; i++){
        *(vec + i) = r;
        printf("\nValor aleatorio %d es %d \n",i,r);
        r = rand();
    }

    free(vec);
    return 0;
};