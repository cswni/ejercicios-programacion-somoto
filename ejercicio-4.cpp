/*
Hacer un programa en donde el usuario introduzca un numero y nos de como resultado
la suma de los multiplos de 4 que hay entre el 1 hasta ese numero. POr ejemplo si el 
usuario escribe 10 la suma de los multiplos de 4 es 12.
*/
/*Agregamos iostream para usar el namespace std*/
#include <stdio.h>
main (){
	printf ( "\n\tHacer un programa en donde el usuario introduzca un numero y nos de como resultado");
	printf ( "\n\tla suma de los multiplos de 4 que hay entre el 1 hasta ese numero. POr ejemplo si el"); 
	printf ( "\n\tusuario escribe 10 la suma de los multiplos de 4 es 12");
	/*Declaramos las variables que guarda ambos numeros y los impares*/
	int numero, inicio =1, suma = 0;	
	/*Solicitar el valor*/
	printf ("\n\t Ingrese el numero maximo:");
	printf ("\n\t:");
	/*Guardar el valor*/
	scanf("%d",&numero);
	/*Comprobar los valores para iniciar siempre con el menor*/
	if(numero > inicio){
		while(inicio <= numero){
		if(inicio%4==0){
			suma = suma + inicio;
		}
		inicio++;
		}
	printf ( "\n\t La suma de los multiplos de 4 entre 1 y %d es = %d",numero,suma);
	}
}

