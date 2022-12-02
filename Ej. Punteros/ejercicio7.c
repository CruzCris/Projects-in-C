# include <stdio.h>
# include <stdlib.h>

int main(){
    int filas, columnas;
    char **p, car = '*';
    char chfilas;
    printf("Para comenzar, ingrese el numero deffilas y columnas: ");
    scanf("%d", &filas);
    columnas = filas;
    printf("Ingrese el caracter a utilizar para el llenado: ");
    scanf("%s", &car);
    p = (char **)malloc(filas*(sizeof(char*)));
    for (int i = 0; i < filas; i++) 
    {
        chfilas = i+'0';
        p[i] = (char *)malloc(columnas*(sizeof(char)));
        for (int j = 0; j < columnas; j++)
        {
            if (i == j)
            {
                p[i][j] = chfilas;
            }
            else p[i][j] = car;
        }
    }

    for (int i = 0; i < filas; i++) 
    {
        printf("[");
        for (int j = 0; j < columnas; j++)
        {
            printf(" %c ", p[i][j]);
        }
        printf(" ]\n");
    }

    for (int i = 0; i < filas; i++) 
    {
        free(p[i]);
    }
    return 0;
}