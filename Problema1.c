#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int opcion;
	int kilometros;
	do{
		printf("¿Hacia donde viajara?\n");
		printf("1.Caldera\n");
		printf("2.Tierra Amarilla\n");
		scanf("%i", &opcion);
		if(opcion<1||opcion>2){
			printf("Error, intente nuevamente.\n");
		}		
	}while(opcion<1||opcion>2);
	
	if(opcion=1){
		kilometros=120
	}
	if(opcion=2){
		kilometros=180
	}
	
	int gasolina=790; /*$porLitro*/
	int litroporkilometro=1.5 /*ltporKm*/
	
		
	int n;
	printf("¿Con cuantos peajes se encuentra en el camino?: ");
	scanf("%i", &n);
	int peajes[n];
	int i;
	
	for(i=0;i<n;i++){
		printf("Ingrese el cobro en el peaje %i:", i+1);
		scanf("%i", &peajes[i]);
	}
	int totalP=0;
	for(i=0;i<n;i++){
		totalP+=peajes[i];
	}
	/*printf("El total del peaje es: %i", totalP);*/
	
	int TVC; /*TotalViaje encarretera*/
	
	TVC=kilometros*litroporkilometro*gasolina;
	int Total; /*Total*/
	Total=TVC+totalP;
	
	
	
	
	
	
	
	return 0;
}
