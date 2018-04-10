	/*
	   Definir variables.
	   Solicitar el nombre del dinosaurio.
	   Guardar el nombre del dinosaurio.
	   Solicitar el peso del dinosaurio en libras.
	   Guardar dicho dato.
	   Solicitar la longitud del dinosaurio en pies.
	   Guardar dicho dato.
	   Realizar el cálculo respectivo para pasar de peso en libras a peso en kilogramos.
	   Realizar el cálculo respectivo para pasar de longitud en pies a longitud en metros.
	   Representar los resultados obtenidos.
	   Retornar a 0.
	*/

#include <stdio.h>

	int main ()
	
{
	char Dinosaurio [2000];
	float peso_en_libras, longitud_en_pies, Peso, Longitud;
	float una_libra = 0.45;
	float un_pie = 0.3048;
	
	printf ("Ingrese el nombre del dinosaurio: ");
	scanf ("%s", Dinosaurio);
	
	printf ("Ingrese el peso en libras del dinosaurio: ");
	scanf ("%f", &peso_en_libras);
	
	printf ("Ingrese la longitud en pies del dinosaurio: ");
	scanf ("%f", &longitud_en_pies);
	
	Peso = (peso_en_libras * una_libra);
	Longitud = (longitud_en_pies * un_pie);
	
	printf ("El peso de: %s", Dinosaurio);
	printf (" corresponde a: %f", Peso);
	printf (" y su longitud equivale a: %.3f metros\n", Longitud);
	
	return 0;
	
}

