	/*
	   Definir variables.
	   Solicitar el valor de x.
	   Guardar el valor de x.
	   Calcular el valor del polinomio con la formula representada anteriormente.
	   Presentar el resultado obtenido.
	   Retornar a 0.
	*/

#include <stdio.h>

	int main ()
	
{
	float x, p_de_x;
	
	printf ("Ingrese el valor de x para calcular el polinomio: ");
	scanf ("%f", &x);
	
	p_de_x = ((x * x * x) + 2 * (x * x) + 3 * x + 5);
	
	printf ("El valor de su polinomio corresponde a: %f\n", p_de_x);
	
	return 0;
	
}


