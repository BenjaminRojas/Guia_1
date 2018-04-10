	/*
	   Definir variables.
	   Solicitar la cantidad de galones surtidos.
	   Guardar la cantidad de galones surtidos.
	   Realizar el cálculo respectivo para pasar de galones de gasolina a litros de gasolina.
	   Realizar el cálculo respectivo para calcular la cantidad de dinero que se deberá pagar.
	   Presentar el resultado obtenido.
	   Retornar a 0.
	*/
	
#include <stdio.h>

	int main ()
	
{
	float galones_surtidos, Litros, Litros_a_pagar;
	float un_galon = 3785;
	float precio_por_litro = 820;
	
	printf ("Ingrese la cantidad de galones surtidos: ");
	scanf ("%f", &galones_surtidos);
	
	Litros = (galones_surtidos * un_galon);
	Litros_a_pagar = (Litros * precio_por_litro);
	
	printf("La cantidad a pagar es de: %.3f", Litros_a_pagar);
	printf(" pesos");
	
	return 0;
	
}


