/*
Hacer un programa que el usuario elija cuantas notas ingresar y que imprima
el tipo de aprendizaje obtenido por el estudiante.
*/
/*Agregamos iostream para usar el namespace std*/
#include "iostream"
/*Usar el namespace */
using namespace std;
main (){
	cout << "\n\tHacer un programa que el usuario elija cuantas notas ingresar y que imprima"<<endl;
	cout << "\n\tel tipo de aprendizaje obtenido por el estudiante"<<endl; 
	cout << "\n\t***************************"<<endl;
	cout << "\n\tAprendizaje avanzado >=90 "<<endl;
	cout << "\n\tAprendizaje Satisfactorio >=76 y < 90 "<<endl;
	cout << "\n\tAprendizaje basico >=60 y <=75 "<<endl;
	cout << "\n\tApredizaje no alcanzado < 60 "<<endl;
	cout << "\n\t**************************"<<endl;	
	/*Declaramos las variables que guarda ambos numeros y los impares*/
	int notas[20], numero, suma=0, promedio;	
	/*Solicitar el valor*/
	cout << "\n\t Cuantas notas desea ingresar:";
	cout << "\n\t:";
	/*Guardar el valor*/
	cin >> numero;
	/*Comprobar los valores para iniciar siempre con el menor*/
	if(numero <= 20){
		int i = 1;
		while(i <= numero){
			cout << "\n\t Nota "<<i<<endl;
			cout << "\n\t";
			cin >>notas[i];
			i++;
		}
		i = 1;
		cout << "\n\t Total "<<numero<<endl;
		while(i <= numero){
			suma = suma + notas[i];
			i++;
		}
		promedio = suma / numero;
		/*Imprimir promedio*/
		cout << "\n\t Promedio "<<promedio<<endl;
		/*Determinar el aprendizaje*/
		if(promedio >= 90){
			cout << "\n\tAprendizaje avanzado"<<endl;
		}else if(promedio >=76 && promedio <=89){
			cout << "\n\tAprendizaje satisfactorio"<<endl;
		}else if(promedio >=60 && promedio <=75){
			cout << "\n\tAprendizaje basico"<<endl;
		}
		else{
			cout << "\n\tAprendizaje no alcanzado"<<endl;
		}
	}
}

