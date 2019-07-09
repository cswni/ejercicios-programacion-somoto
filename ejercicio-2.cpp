/*
Hacer un programa que sume los numeros pares del 1 hasta donde elija el usuario (ejemplo del 1 al 20 o del 1 al 40).
*/
/*Agregamos iostream para usar el namespace std*/
#include "iostream"
/*Usar el namespace */
using namespace std;
main (){
	cout << "\n\tHacer un programa que sume los numeros pares del 1 hasta donde elija el usuario\n\t(ejemplo del 1 al 20 o del 1 al 40"<<endl;
	/*Declaramos la variable que guarda el numero ingresa y la suma*/
	int numero = 0,suma =0;	
	/*Solicitar el valor*/
	cout << "\n\t Ingrese un numero:";
	cout << "\n\t:";
	/*Guardar el valor*/
	cin >> numero;
	/*Iniciar variable contadora a 1*/
	int i = 1;
	while(i <=numero){
		if(i%2==0){
			cout <<"\n\t "<< suma <<" + "<<i<<" = "<<suma + i<<endl;
			suma = suma + i;
		}
		i++;
	}
	cout << "\n\t La suma total es :"<<suma<<endl;
}

