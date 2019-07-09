/*
Hacer un programa que sume los numeros pares del 1 hasta donde elija el usuario (ejemplo del 1 al 20 o del 1 al 40).
*/
#include <stdio.h>
main (){
	printf("\n\tHacer un programa que sume los numeros pares del 1 hasta donde elija el usuario\n\t(ejemplo del 1 al 20 o del 1 al 40");
	/*Declaramos la variable que guarda el numero ingresa y la suma*/
	int numero = 0,suma =0;	
	/*Solicitar el valor*/
	printf("\n\t Ingrese un numero:");
	printf ("\n\t:");
	/*Guardar el valor*/
	scanf ("%d",&numero);
	/*Iniciar variable contadora a 1*/
	int i = 1;
	while(i <=numero){
		if(i%2==0){
			printf ("\n\t %d + %d = %d",suma, i, suma + i);
			suma = suma + i;
		}
		i++;
	}
	printf ("\n\t La suma total es : %d",suma);
}

