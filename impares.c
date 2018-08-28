#include <stdio.h>

int main(int argc, char *argv[]) {
	int sum = 0; // Declaración de una variable
	int impares[20]; // Declaración de un vector
	int contador = 0; // Declaración de una variable
	int numero; // Declaración de una variable
	
	for(int i = 1; i <= 20; i++) // Ciclo for para repetir acciones
	{
		printf("Ingrese un numero \n"); // se muestra mensaje
		scanf("%d",&numero); // el dato ingresado se asigna a la variable numero
		if(numero% 2!= 0) // Verificación si el numero es par
		{
			impares[contador] = numero; //almacena los numeros pares
			contador++; // aumentando en posición en el vector
		}
	}
	
	for(int i = 0; i < contador; i++) // Ciclo for para repetir acciones
	{
		sum +=impares[i]; // suma de los numeros pares
	}
	
	printf (" la suma de los numeros impares es: %d  \n",sum); // se muestra mensaje
	return 0;
}

