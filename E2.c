	/*
	   Definir las variables.
	   Solicitar el número al cual se le desea calcular su cuadrado y su cubo.
	   Guardar el número al cual se le desea calcular su cuadrado y su cubo.
	   Realizar el cálculo del cuadrado del número con la formula señalada.
	   Realizar el cálculo del cubo del número con la formula señalada.
	   Representar los valores obtenidos.
	   Retornar a 0.
	*/

#include <stdio.h>

	int main ()
	
{
	int numero, Cuadrado, Cubo;
	
	printf ("Ingrese el número: ");
	scanf ("%d", &numero);
	
	Cuadrado = (numero * numero);
	Cubo = (numero * numero * numero);
	
	printf ("El cuadrado del número ingresado es: %d\n", Cuadrado);
	printf ("El cubo del número ingresado es: %d\n", Cubo);

	return 0;
	
}




