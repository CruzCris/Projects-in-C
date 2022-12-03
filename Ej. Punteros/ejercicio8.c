#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int i, h,m, edad_mayor;
struct alumnos{
    char nombre[25];
    char sexo;
    int edad;
};

int main(){
	
    struct alumnos *r;
    r=((struct alumnos*) malloc(sizeof(struct alumnos)*3));
    
    for(i=0; i<3; i++){
        printf("Persona [%d] Nombre: ",i);
        scanf("%s", (r+i)->nombre);
        fflush(stdin);
        printf("Sexo: ");
        scanf("%s", &(r+i)->sexo);
        fflush(stdin);
        printf("Edad: ");
        scanf("%d", &(r+i)->edad);
        fflush(stdin);
    }
    for(i=0; i<=2; i++){
        if(((r + i)->sexo)=='M'||((r + i)->sexo)=='m'){
            m++;
        }else{
            h++;
        }
    }
    system("cls");
    printf("\n El numero de mujeres es de: %d ", m);
    printf("\n El numero de hombres es de: %d ", h);
    
    for(i=0; i<=2; i++){
        if(((r + i) ->edad) > edad_mayor){edad_mayor = (r + i)->edad;}
    }
    printf("\n La edad mayor de todos es: %d ", edad_mayor);
    printf("\n \nLa informacion de la persona con mayor edad es: ");

  	for(i=0; i<=2; i++){
        if(((r + i)->edad)==edad_mayor){
            printf("\t\n Nombre: %s",(r + i)->nombre);
            printf("\t\n Sexo: %c",(r + i)->sexo);
            printf("\t\n Edad: %d",(r + i)->edad);
        }
    }

    return 0;
}