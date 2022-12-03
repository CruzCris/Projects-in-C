# include <stdio.h>
# include <stdlib.h>

int main(int argc, char **argv){
    int i=0;
    char **mat, car, entero;
    mat = (char *)malloc(3*(sizeof(char*)));
    for(i=0; i<3; i++){
        *(mat + i) = (char*)malloc(3*sizeof(int));
    }
    printf("\n Se realizara una matriz 3 x 3");
    printf("\n Ingrese el caracter de relleno: ");
    scanf("%s", &car);
    for(i=0; i<3; i++){
        entero = i + '0';
        for(int j=0; j<3; j++){
            *(*(mat + i)+j)=car;
            *(*(mat + i)+i)=entero;
        }
    }
    for (  i=0; i<3; i++ ) {
        printf( "\n" );
        for (int j=0; j<3; j++ ) {
            printf( "%c   ", *(*(mat + i)+j) );
        }
    }
     printf( "\n" );
    return 0;
}