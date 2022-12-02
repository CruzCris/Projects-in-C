#include <stdio.h>
#include <stdlib.h>

int main() {
    int tam_palabra;
    int j = 0;
    char *ap,c;
    printf("\nIngrese la longitud de la cadena: ");
    scanf("%d", &tam_palabra);

    ap=(char*) malloc ((tam_palabra*(sizeof (char))));

    printf("Ingrese la cadena: ");
    scanf(" %[^\n]", ap);

    for (int i = 0; i < tam_palabra; i++){
        j++;
        c = *(ap+i);
        printf("\n%c",c);
    }
    printf("\n");
    printf("\nEl tamano de la cadena es de: %d \n",j);
    free(ap);
    return 0;
};