#include <stdio.h>
/* 
* Programa: Encontrar n�mero menor
* Fecha: 25 de agosto 2018
* Elaborador: Mauricio Montoya Abadia
*/

//Comienzo de c�digo

int main(int argc, char *argv[]) { // Funci�n principal main
	
	float sum = 0; // Declaraci�n de una variable
	float numero[] = {(1.5),(2.5),(3.5),(4.5)}; // Declaraci�n de una vector
	
	
	for(int i = 0; i < 4; i++) // Ciclo for para repetir acciones
	{
		sum +=numero[i]; // suma de los numeros decimales
	}
	
	printf (" la suma de los numeros decimales es: %f  \n",sum); // se muestra mensaje
	
	return 0;
}

