#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int pares[10]; // Declaración de un vector
	int contador = 0; // Declaración de una variable
	int numero; // Declaración de una variable
	
	for(int i = 1; i <= 10; i++) // Ciclo for para repetir acciones
	{
		printf ("Ingrese un numero \n"); // se muestra mensaje
		scanf ("%d",&numero); // el dato ingresado se asigna a la variable numero
		
		
		if(numero%2==0) // Verificación si el numero es par
		{
			pares[contador] = numero; //almacena los numeros pares
			contador++; // aumentando en posición en el vector
		}
	}
	
	for(int i = 0; i < contador; i++) // Ciclo for para repetir acciones
	{
		printf (" Numeros pares: %d  \n",pares[i]); // se muestra mensaje
	}
	
	return 0;
}

