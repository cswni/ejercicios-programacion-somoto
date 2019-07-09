/*
Digite un numero, si el numero supera a 10, multiplique los 10 primeros numeros
sino sumelos.
*/
/*Agregamos iostream para usar el namespace std*/
#include "iostream"
/*Usar el namespace */
using namespace std;
main (){
	cout << "\n\tDigite un numero, si el numero supera a 10, \n\tmultiplique los 10 primeros numeros sino; sumelos"<<endl;
	/*Declaramos la variable que guarda el numero ingresa, suma y multiplicacion*/
	int numero = 0, multiplicado = 1, sumado =0;
	/*Solicitar el valor*/
	cout << "\n\t Ingrese un numero:";
	cout << "\n\t:";
	/*Guardar el valor*/
	cin >> numero;
	/*Iniciar variable contadora a 1*/
	int i = 1;
	/*Validar si el numero es mayor que 10*/
	if(numero > 10){
		/*Recorrer con un ciclo for*/
	
		while(i <= 10){
			multiplicado = multiplicado * i;
			i++;
		}
		cout << "\n\t El resultado de la multiplicacion es : "<< multiplicado;
	}else{
		while(i <=10){	
			sumado = sumado + i;
			i++;
		}
		cout << "\n\t El resultado de la suma es : "<<sumado<<endl;
	}
}
