#include <stdio.h>
#include <stdlib.h>

int main() {
    char *cadena, car;
    int tam, t=0, rep=0, i;

    printf("\nIntroduzca la magnitud del vector: ");
    scanf("%d", &tam);
    cadena = ((char*)malloc((sizeof(char))*tam + 1));
    printf("\nIntroduzca la cadena: ");
    scanf("\n %s", cadena);
    printf("\nIntroduzca el caracter a buscar: ");
    scanf("%s", &car);

    for ( i = 0; i < tam; i++)    {
        cadena++;
        if((*cadena) ==  car){
            rep++;
        }
        if((*cadena) == '\0'){
            break;
        }
    }

    printf("\nLa cantidad de veces que se repite %c es de: %d ",car,rep);
    free(cadena);
    
    return 0;

};