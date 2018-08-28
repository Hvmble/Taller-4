#include <stdio.h>
/* 
* Programa: Encontrar número menor
* Fecha: 25 de agosto 2018
* Elaborador: Mauricio Montoya Abadia
*/

//Comienzo de código

int main(int argc, char *argv[]) { // Función principal main
	
	float sum = 0; // Declaración de una variable
	float numero[] = {(1.5),(2.5),(3.5),(4.5)}; // Declaración de una vector
	
	
	for(int i = 0; i < 4; i++) // Ciclo for para repetir acciones
	{
		sum +=numero[i]; // suma de los numeros decimales
	}
	
	printf (" la suma de los numeros decimales es: %f  \n",sum); // se muestra mensaje
	
	return 0;
}

