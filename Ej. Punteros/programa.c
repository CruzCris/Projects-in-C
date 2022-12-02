#include <stdio.h>
#include <stdlib.h>
int main (){
	/*CREAR UN PROGRAMA EN LENGUAJE C QUE LLENE Y MUESTRE UN ARREGLO DE 5 DIMENSIONES. LOS VALORES PARA EL LLENADO LOS VA A AGREGAR EL USUARIO 
	EL PROGRAMA DEBE TENER UN MENU DONDE EL USUARIO PUEDA SELECCIONAR EL TIPO DE CICLOS A USAR 
	TIPOS DE CICLOS A USAR
	-FOR
	-WHILE
	-DO WHILE 
	*/
	int opcion,arr[2][1][2][2][1],opcion2, opcion3,opcion4,op3,op4,valor1,valor2,i,j,k,l,m;
	printf("Bienvenido, en este programa podra llenar un arreglo de 5 dimensiones\n");
	do{
	printf("Seleccione de que manera desea llenar el arreglo\n");
	printf( "1 - CICLO FOR\n" );
    printf( "2 - CICLO WHILE\n" );
    printf( "3 - CICLO DO WHILE\n" );
    printf( "4 - Salir\n" );
    scanf( "%i", &opcion );
    switch(opcion){
    	case 1: //CICLO FOR
    	system ("cls");
    	printf("Usted escogio llenar el arreglo con ciclo for\n");
     do{
        printf("\n");
    	printf("1-Llenar\n");
    	printf("2-Mostrar\n");
    	printf("3-Salir\n");
    	scanf("%d",&opcion2);
    	switch(opcion2){
    		case 1: 
    		//arr[2][1][2][2][1]
    		printf("Introduzca los valores :" );
    		for(i=0;i<2;i++){   
    		   for(j=0;j<1;j++){
    			 for(k=0;k<2;k++){
    			   for(l=0;l<2;l++){   			   	  
    			   	for(m=0;m<1;m++){
    			   		printf("\nIntroduce valor: ");
    			   		printf("\n [%d][%d][%d][%d][%d]=",i,j,k,l,m);
    			        scanf("%d",&valor1);
    			   		arr[i][j][k][l][m]=valor1;  			   		
					   }
				   }
				}
			  }
			}
    		    break;
    		case 2:
            printf("\nUsted esta en la seccion de mostrar " );
            printf("\nEste es el arreglo: " );
    		for(i=0;i<2;i++){   
    		   for(j=0;j<1;j++){
    			 for(k=0;k<2;k++){
    			   for(l=0;l<2;l++){ 
                    printf("\n");  			   	  
    			   	for(m=0;m<1;m++){
    			   		printf("[%d][%d][%d][%d][%d]=%d",i,j,k,l,m,arr[i][j][k][l][m]);
                        printf("\n");
                    }    
                   }
                 }
                }
            }
    			break;
    		default: 

    		    break;
		}
    	
    }while(opcion2!=3);
        
        case 2:
        printf("Usted escogio llenar el arreglo con ciclo while\n");
        do{
        printf("\n");
    	printf("1-Llenar\n");
    	printf("2-Mostrar\n");
    	printf("3-Salir\n");
    	scanf("%d",&opcion3);
            switch (opcion3)
            {
                case 1:
                printf("Introduzca los valores :" );
                

            
            break;

            case 2:
            printf("adios");
            break;
        default:
            break;
        }
    }while(opcion3!=3);
    

    case 3:
        printf("Usted escogio llenar el arreglo con ciclo do while\n");
        do{
        printf("\n");
    	printf("1-Llenar\n");
    	printf("2-Mostrar\n");
    	printf("3-Salir\n");
    	scanf("%d",&opcion4);
            switch (opcion4)
            {
                case 1:
                printf("HOla");
            
            break;

            case 2:
            printf("adios");
            break;
        default:
            break;
        }
    }while(opcion4!=3);
    


    
	
    }	
}while(opcion!=4);
return 0;
}
	
