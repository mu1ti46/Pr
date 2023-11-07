#include <stdio.h>
#include "funciones.h"



int main(){
	int x, y, z, w;

	printf( "Introduzca el primer número: ");
	scanf("%d", &x);
	printf( "Introduzca el segundo número: ");
	scanf("%d", &y);
	printf("1-Sumar\n");
	printf("2-Restar\n");
	printf("3-Multiplicar\n");
	printf("4-Dividir\n");
	printf("5-Salir\n");
	printf("Elige la opción: \n");
	scanf("%d", &z);

	switch(z){
		case 1:
			w = sumar(x, y);
			printf("Resultado es %d", w);
			break;
		case 2:
			w = restar(x, y);
			printf("Resultado es %d", w);
			break;
		case 3:
			w = multiplicar(x, y);
			printf("Resultado es %d", w);
			break;
		case 4:
			w = dividir(x, y);
			printf("Resultado es %d", w);
			break;
		case 5:
			printf("Saliendo del programa...");
			break;
	}
}

