	/*
	   Definir variables.
	   Solicitar la cantidad de kilómetros a recorrer.
	   Guardar dicho dato.
	   Solicitar el valor por cada kilómetro recorrido.
	   Realizar el calculo el calculo del costo del boleto.
	   Presentar el valor obtenido.
	   Retornar a 0.
	*/


#include <stdio.h>

	int main ()
	
{
	int Costo_boleto, costo_por_kilometro;
	float kilometros_por_recorrer;
	
	printf ("Ingrese la cantidad de kilómetros que recorrerá: ");
	scanf ("%f", &kilometros_por_recorrer);
	
	printf("Ingrese el valor por cada kilómetro recorrido: ");
	scanf("%d", &costo_por_kilometro);
	
	Costo_boleto = (kilometros_por_recorrer * costo_por_kilometro);
	
	printf ("El valor de su boleto equivale a: %d\n", Costo_boleto);
	
}

