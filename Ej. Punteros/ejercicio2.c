#include <stdio.h>
#include <stdlib.h>

int main() {
    char *cad, caracter;
    int tam_c, repeticion=0, i;

    printf("\nIntroduzca la magnitud del vector: ");
    scanf("%d", &tam_c);
    cad = ((char*)malloc((sizeof(char))*tam_c + 1));
    printf("\nIntroduzca la cadena: ");
    scanf("\n %s", cad);
    printf("\nIntroduzca el caracter a buscar: ");
    scanf("%s", &caracter);

    for ( i = 0; i < tam_c; i++)    {
        cad++;
        if((*cad) ==  caracter){
            repeticion++;
        }
        if((*cad) == '\0'){
            break;
        }
    }

    printf("\nLa cantidad de veces que se repite %c es de: %d ",caracter,repeticion);
    free(cad);
    
    return 0;

};