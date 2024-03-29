/*
Hacer un programa que el usuario elija cuantas notas ingresar y que imprima
el tipo de aprendizaje obtenido por el estudiante.
*/
#include <stdio.h>
main (){
	printf ( "\n\tHacer un programa que el usuario elija cuantas notas ingresar y que imprima");
	printf ( "\n\tel tipo de aprendizaje obtenido por el estudiante"); 
	printf ( "\n\t***************************");
	printf ( "\n\tAprendizaje avanzado >=90 ");
	printf ( "\n\tAprendizaje Satisfactorio >=76 y < 90 ");
	printf ( "\n\tAprendizaje basico >=60 y <=75 ");
	printf ( "\n\tApredizaje no alcanzado < 60 ");
	printf ( "\n\t**************************");	
	/*Declaramos las variables que guarda ambos numeros y los impares*/
	int notas[20], numero, suma=0, promedio, valido=0;	
	/*Solicitar el valor*/
	printf ( "\n\t Cuantas notas desea ingresar:");
	printf ( "\n\t:");
	/*Guardar el valor*/
	scanf("%d", &numero);
	/*Comprobar los valores para iniciar siempre con el menor*/
	if(numero <= 20){
		int i = 1;
		while(i <= numero){
			printf ( "\n\t Nota %d",i);
			printf ( "\n\t");
			/*Guardar el valor en una variable temporal*/
			scanf("%d",&valido);
			/*Verificar si es correcta */
			if(valido >=0 && valido <=100){
				notas[i] = valido;	
				i++;
			}else{
				/*Si la nota es invalida. No se incrementa y se muestra el mensaje. Tampoco se guarda*/
				printf ( "\n\t Nota invalida. Ingrese valores entre 0 y 100.");
			}			
		}
		i = 1;
		printf ( "\n\t Total %d",numero);
		while(i <= numero){
			suma = suma + notas[i];
			i++;
		}
		promedio = suma / numero;
		/*Imprimir promedio*/
		printf ( "\n\t Promedio : %d",promedio);
		/*Determinar el aprendizaje*/
		if(promedio >= 90){
			printf ("\n\tAprendizaje avanzado");
		}else if(promedio >=76 && promedio <=89){
			printf ( "\n\tAprendizaje satisfactorio");
		}else if(promedio >=60 && promedio <=75){
			printf ( "\n\tAprendizaje basico");
		}else{
			printf ( "\n\tAprendizaje no alcanzado");
		}
	}
}

