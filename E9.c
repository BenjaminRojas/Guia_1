	/*
	   Definir variables.
	   Solicitar el sueldo base mensual del trabajador.
	   Guardar dicho dato.
	   Realizar el calculo correspondiente a la comisión recibida.
	   Realizar el calculo correspondiente al sueldo recibo a fin de mes.
	   Presentar los valores obtenidos.
	   Retornar a 0.
	*/

#include <stdio.h>

	int main ()
	
{
	int sueldo_base_mensual;
	float Sueldo_recibido, Comision_recibida;
	float comision_mensual = 0.28;
	
	printf ("Ingrese el sueldo base mensual del trabajador: ");
	scanf ("%d", &sueldo_base_mensual);
	
	Comision_recibida = (sueldo_base_mensual * comision_mensual);
	Sueldo_recibido = (sueldo_base_mensual + Comision_recibida);
	
	printf ("El trabajador al final del mes recibirá: %f", Sueldo_recibido);
	printf (" pesos y su comisión equivaldrá a: %f", Comision_recibida);
	printf (" pesos");
	
	return 0;
	
}




