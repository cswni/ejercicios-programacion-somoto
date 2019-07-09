/*
Digite un numero, si el numero supera a 10, multiplique los 10 primeros numeros
sino sumelos.
*/
#include <stdio.h>
main (){
	printf ("\n\tDigite un numero, si el numero supera a 10, \n\tmultiplique los 10 primeros numeros sino; sumelos");
	/*Declaramos la variable que guarda el numero ingresa, suma y multiplicacion*/
	int numero = 0, multiplicado = 1, sumado  = 0;
	/*Solicitar el valor*/
	printf("\n\t Ingrese un numero:");
	printf ("\n\t:");
	/*Guardar el valor*/
	scanf("%d",&numero);
	/*Iniciar variable contadora a 1*/
	int i = 1;
	/*Validar si el numero es mayor que 10*/
	if(numero > 10){
		/*Recorrer con un ciclo while*/
		while(i <= 10){
			multiplicado = multiplicado * i;
			i++;
		}
		printf ("\n\t El resultado de la multiplicacion es : %d", multiplicado);
	}else{
		while(i <=10){	
			sumado = sumado + i;
			i++;
		}
		printf ("\n\t El resultado de la suma es : %d",sumado);
	}
}
