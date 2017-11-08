//cuales se conoce su nombre y los kilómetros que conducen durante cada
//día de la semana, esa información se guarda en un arreglo de N x 6. Se
//requiere un codigo en c que capture esa información y genere un vector con
//el total de kilómetros que recorrió cada chofer durante la semana. 
 //Al final se debe presentar un reporte donde se muestre
//el nombre del chofer, los kilómetros recorridos cada día y el total de éstos
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main(){
	int n, i, j, vector[n], suma=0;
    char nombres[30];
	
	printf("Dame el numero de choferes\n");
	scanf("%d", &n);
		int matriz1[n][6];
		printf("Dame el nombre de cada chofer\n");
		
	printf("Dame los kilometros de cada dia\n");
	printf("Semana Lunes a Sabado \n");
	for(i=0;i<n;i++){
		for(j=0;j<6;j++){
			
			printf("Dia %d \n", j+1);
			scanf("%d", &matriz1[i][j]);
		}
		printf("\n");
		
	}
	//suma e impresion del vector
	for(i=0;i<n;i++){
		suma=0;
		for(j=0;j<6;j++){
			suma=suma+matriz1[i][j];
			vector[i]=suma;
		}
	}
	for(i=0;i<n;i++){
		printf("%d \n", vector[i]);
	}
	//impresion en la forma en que lo pide 
	printf("   lunes  Martes Miercoles Jueves Viernes Sabado TotalKm\n");
	
    for(i=0;i<n;i++){
    	for(j=0;j<6;j++){
    		printf("%8d", matriz1[i][j]);
    			
		}
		printf("  %d", vector[i]);
		printf("\n");
	}
	//imprimir nombres 
	printf ("Nombres\n%s", nombres);

	return(0);
}
