/*
Hacer un programa que diga cuantos numeros impares hay entre m y n elegidos por el usuario (Por eejmplo el numero de imparres que hay entre 
32 y 38 es 3)
*/
/*Agregamos iostream para usar el namespace std*/
#include "iostream"
/*Usar el namespace */
using namespace std;
main (){
	cout << "\n\tHacer un programa que diga cuantos numeros impares hay entre m y n elegidos por el usuario \n\t(Por ejemplo el numero de imparres que hay entre 32 y 38 es 3"<<endl;
	/*Declaramos las variables que guarda ambos numeros y los impares*/
	int n = 0, m = 0, impares =0, inicio, fin;	
	/*Solicitar el valor*/
	cout << "\n\t Ingrese el numero n:";
	cout << "\n\t:";
	/*Guardar el valor*/
	cin >> n;
	cout << "\n\t Ingrese el numero m:";
	cout << "\n\t:";
	/*Guardar el valor*/
	cin >> m;
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
	cout << "\n\t El total de numeros impares entre "<<n<<" y "<<m<< " es: "<<impares<<endl;
}

