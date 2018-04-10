	/* 
	   Definir variables.
	   Solicitar el valor del cateto 1.
	   Guardar dicho dato.
	   Solicitar el valor del cateto 2.
	   Guardar dicho dato.
	   Solicitar el valor del cateto 3.
	   Guardar dicho dato.
	   Realizar el cálculo correspondiente para obtener la hipotenusa al cuadrado.
	   Presentar el resultado obtenido.
	   Retornar a 0.
	*/

#include <stdio.h>

	int main ()
	
{
	float Cateto1, Cateto2, Hipotenusa_al_cuadrado;
	
	printf ("Ingrese el Cateto 1: ");
	scanf ("%f", &Cateto1);
	
	printf ("Ingrese el Cateto 2: ");
	scanf ("%f", &Cateto2);
	
	Hipotenusa_al_cuadrado = ((Cateto1 * Cateto1 + Cateto2 * Cateto2));

	printf ("El valor de la hipotenusa al cuadrado es: %f\n", Hipotenusa_al_cuadrado);
	
	return 0;
	
}
	
	
