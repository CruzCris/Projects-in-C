#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcion;
    printf("Bienvenido a los ejercicios de apuntadores en C\n");
    printf("Ingrese la opcion que desea:\n");
    printf("1. Ejercicio 1\n");
    printf("2. Ejercicio 2\n");
    printf("3. Ejercicio 3\n");
    printf("4. Ejercicio 4\n");
    printf("5. Ejercicio 5\n");
    printf("6. Ejercicio 6\n");
    printf("7. Ejercicio 7\n");
    printf("8. Ejercicio 8\n");
    scanf("%i", &opcion);
    switch (opcion){
        case 1:
            char texto[10];
            printf("Ingrese la palabra a contar:\n");
            scanf("%s", texto);
            int longitud = sizeof(texto);
            printf("%i", longitud);
            for(int i=0;i<longitud;i++){
                printf("En %d el arreglo tiene el valor:\n", i);
            }
            break;
        case 2:
            char cadena[] = "Hola Mundo";
            char caracter = 'o';
            //char *dir = buscarCaracter(cadena,caracter);
            break;
        case 3:
            int rand(void);
            printf("%i", rand);
            break;
        case 4:
            printf("4");
            break;
        case 5:
            printf("5");
            break;
        case 6:
            printf("6");
            break;
        case 7:
            printf("7");
            break;
        case 8:
            printf("8");
            break;
        default:
            printf("No se reconoce esa opcion");
            exit(0);
            break;
    }
}