/*
Hacer un programa que diga cuantos numeros impares hay entre m y n elegidos por el usuario (Por eejmplo el numero de imparres que hay entre 
32 y 38 es 3)
*/
/*Agregamos iostream para usar el namespace std*/
#include <stdio.h>
main (){
	printf ("\n\tHacer un programa que diga cuantos numeros impares hay entre m y n elegidos por el usuario \n\t(Por ejemplo el numero de imparres que hay entre 32 y 38 es 3");
	/*Declaramos las variables que guarda ambos numeros y los impares*/
	int n = 0, m = 0, impares =0, inicio, fin;	
	/*Solicitar el valor*/
	printf ( "\n\t Ingrese el numero n:");
	printf ( "\n\t:");
	/*Guardar el valor*/
	scanf("%d",&n);
	printf ( "\n\t Ingrese el numero m:");
	printf ( "\n\t:");
	/*Guardar el valor*/
	scanf("%d",&m);
	/*Comprobar los valores para iniciar siempre con el menor*/
	if(m<n){
		inicio = m;
		fin = n;
	}else{
		inicio = n;
		fin = m;
	}
	while(inicio <= fin){
		if(inicio%2!=0){
			impares++;
		}
		inicio++;
	}
	printf ("\n\t El total de numeros impares entre %d y %d es %d",n,m,impares);
}

