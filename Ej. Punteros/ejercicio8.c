#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ELEMENTOS 3

struct alumno {
char nombre[20];
char sexo[30];
int edad;
};

int main()
{
  int num_amigo,canti,h,m,pos;

    printf("Para comenzar, ingrese la cantidad de alumnos a ingresar: \n");
    scanf("%d",&canti);
    struct alumno amigo[canti], *p_amigo,*mayor,my;
    p_amigo = amigo;
    mayor=p_amigo;

    for ( num_amigo=0; num_amigo<canti; num_amigo++ )
    {
    printf("Datos del alumno %i\n",num_amigo+1);
    printf("Nombre: ");fflush(stdin);
    gets(p_amigo->nombre);
    printf("Sexo: ");fflush(stdin);
    gets(p_amigo->sexo);
    if(*p_amigo->sexo == 'm'){
    h=h+1;
    }
    if(*p_amigo->sexo == 'f'){
        m=m+1;
    }
    printf("Edad: ");fflush(stdin);
    scanf( "%d", &p_amigo->edad );
    p_amigo++;
    }
   
    p_amigo = amigo;

    for( num_amigo=0; num_amigo<canti; num_amigo++ )
    {

    if(p_amigo->edad >= mayor->edad){
            pos=num_amigo;
            mayor->edad=p_amigo->edad;
        }

    p_amigo++;
    }
    printf( "\n\nCantidad de varones ingresados: %d\n", h);
    printf( "Cantidad de mujeres ingresados: %d\n", m);
    printf( "Alumno mayor: %d\n", mayor->edad);

    printf( "\nDatos del alumno mayor\n\n");

    printf( "Nombre: %s\n", amigo[pos].nombre );
    printf( "Sexo: %s\n", amigo[pos].sexo );
    printf( "Edad: %d\n", mayor->edad );
    return 0;
}