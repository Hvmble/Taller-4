#include <stdio.h>
/* 
* Programa: Encontrar n�mero menor
* Fecha: 25 de agosto 2018
* Elaborador: Mauricio Montoya Abadia
*/

//Comienzo de c�digo

int main(int argc, char *argv[]) { // Funci�n principal main
	int sum = 0; // Declaraci�n de una variable
	int numero[100]; // Declaraci�n de un vector
	int contador = 0; // Declaraci�n de una variable
	
	for(int i = 1; i <= 100; i++) // Ciclo for para repetir acciones
	{
		if(i%2==0) // Verifiaci�n si el numero es par
		{
			numero[contador] = i; //almacena los numeros pares
			contador++; // aumentando en posici�n en el vector
		}
	}
	
	for(int i = 0; i < contador; i++) // Ciclo for para repetir acciones
	{
		sum +=numero[i]; // suma de los numeros pares
	}
	
	printf (" la suma de los numeros pares es: %d  \n",sum); // se muestra mensaje

	return 0;
}

