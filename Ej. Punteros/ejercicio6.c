#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    int **matriz;
    int nFilas, nColumnas, filas, columnas, llenar, diagonal;

    printf("Introduce el numero de filas: \n");
    scanf("%d", &nFilas);
    printf("Introduce el numero de columnas: \n");
    scanf("%d", &nColumnas);

    if (nFilas != nColumnas){
        printf("El numero de filas y columnas debe de ser ser igual \n");
    }
    else{
        matriz = (int **)malloc(nFilas * sizeof(int *));

        for (filas = 0; filas < nColumnas; filas++){
            *(matriz + filas) = (int *)malloc(nColumnas * sizeof(int));
        }
        for (filas = 0; filas < nFilas; filas++){
            for (columnas = 0; columnas < nColumnas; columnas++){
                *(*(matriz + filas) + columnas) = 0;
            }
        }

        for (llenar = 0; llenar < nFilas; llenar++){
            *(*(matriz + llenar) + llenar) = 1;
        }

        diagonal = nFilas - 1;
        for (llenar = 0; llenar < nFilas; llenar++){
            *(*(matriz + llenar) + diagonal) = 1;
            diagonal--;
        }

        printf("Arreglo de %d x %d \n\n", nFilas, nColumnas);
        for (filas = 0; filas < nFilas; filas++){
            for (columnas = 0; columnas < nColumnas; columnas++){
                printf("%d ", *(*(matriz + filas) + columnas));
            }
            printf("\n");
        }

        for (filas = 0; filas < nFilas; filas++){
            free(matriz + filas);
        }
        free(matriz);
    }
    return 0;
}