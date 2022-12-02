#include <stdio.h>
#include <stdlib.h>

int d1;
int d2;
int cero = 0;
int uno = 1;

void getDimensiones() {
    do {
        system( "cls" );
        if ( d1 != d2 ) {
            printf( "Para que la matriz tenga una diagonal principal, las dimensiones deben ser las mismas\n" );
        };
        printf( "Valor de la primer dimension: " );
        scanf( "%i", &d1 );
        printf( "Valor de la segunda dimension: " );
        scanf( "%i", &d2 );
    } while ( d1 != d2 );
};

int main() {
    getDimensiones();
    int * pArray[ d1 ][ d2 ];
    for ( int i = 0; i < d1; i++ ) {
        for ( int j = 0; j < d2; j++ ) {
            pArray[ i ][ j ] = &cero;
        };
    };
    int diagonal2 = d1 - 1;
    for ( int i = 0; i < d1; i++ ) {
        pArray[ i ][ i ] = &uno;
        pArray[ i ][ diagonal2 - i ] = &uno;
    };
    system( "cls" );
    printf( "Matriz de %i x %i", d1, d2 );
    for ( int i = 0; i < d1; i++ ) {
        printf( "\n" );
        for ( int j = 0; j < d2; j++ ) {
            printf( "%i   ", * pArray[ i ][ j ] );
        };
    };
    return 0;
};