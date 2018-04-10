	/*
	   Definir variables.
	   Solicitar la cantidad de días que se quieren pasar a segundos.
	   Guardar dicha cantidad de días.
	   Realizar el cálculo correspondiente para transformar de días a segundos.
	   Presentar el resultado obtenido.
	   Retornar a 0.
	*/

#include <stdio.h>

	int main ()
	
{
	int numero_de_dias, Total_segundos;
	int un_dia = 86400;
	
	printf ("Ingrese la cantidad de días para saber su correspondiente en segundos: ");
	scanf ("%d", &numero_de_dias);
	
	Total_segundos = (numero_de_dias * un_dia);
	
	printf ("Los segundos correspondientes a la cantidad de días seleccionados son: %d\n", Total_segundos);
	
	return 0;
	
}


