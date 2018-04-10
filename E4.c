	/*
	   Definir variables.
	   Solicitar la base del rectángulo.
	   Guardar dicho dato.
	   Solicitar la altura del rectángulo.
	   Guardar dicho dato.
	   Realizar el cálculo de la superficie con la fórmula ya señalada.
	   Realizar el cálculo del perímetro con la fórmula ya señalada.
	   Presentar los resultados obtenidos.
	   Retornar a 0.
	*/

#include <stdio.h>

	int main ()
	
{
	float Superficie, Perimetro, base, altura;
	
	printf ("Ingrese la base del rectángulo: ");
	scanf ("%f", &base);
	
	printf ("Ingrese la altura del rectángulo: ");
	scanf ("%f", &altura);
	
	Superficie = (base * altura);
	Perimetro = (2 * (base + altura));
	
	printf ("El valor de la superficie es: %f\n", Superficie);
	printf ("El valor del perímetro es: %f\n", Perimetro);
	
	return 0;
	
}

	
