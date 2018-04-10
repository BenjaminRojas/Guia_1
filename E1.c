	/*
	   Definir variables.
	   Solicitar la calificación 1 del estudiante.
	   Guardar la calificación 1 del estudiante.
	   Solicitar la calificación 2 del estudiante.
	   Guardar la calificación 2 del estudiante.
	   Solicitar la calificación 3 del estudiante.
	   Guardar la calificación 3 del estudiante.
	   Realizar el cálculo del promedio del estudiante con la formula señalada.
	   Presentar el resultado obtenido.
	   Retornar a 0.
	*/

#include <stdio.h>

	int main ()
	
{
	
	int Matricula= 2018430002;
	float Calificacion1, Calificacion2, Calificacion3, Promedio;
	
	printf ("Calculo del promedio de las 3 calificaciones del estudiante\n");
	printf ("El número de matrícula del alumno es: %d\n", Matricula);
	
	printf ("Ingrese la Calificación 1: ");
	scanf ("%f", &Calificacion1);
	
	printf ("Ingrese la Calificación 2: ");
	scanf ("%f", &Calificacion2);
	
	printf("Ingrese la Calificación 3: ");
	scanf ("%f", &Calificacion3);
	
	Promedio = ((Calificacion1 + Calificacion2 + Calificacion3) /3);
	
	printf ("El promedio de las calificaciones ingresadas es: %f\n", Promedio);
	
	return 0;
	
}

