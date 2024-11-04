//Amplificador de tres etapas
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float ae1, ae2, ae3, ava, f; //aen: aumento de la etapa "n"; ava: aumento de voltaje del amplificador; f: frecuencia
	
	//Solicitando al usuario la frecuencia:
	cout<<"Ingrese la frecuencia: ";
	cin>>f;
	
	//Calculando el aumento de cada etapa:
	ae1 = 23 / pow(pow(2.3, 2) + pow(0.044 * f, 2), 1 / 2);
	ae2 = 12 / pow(pow(6.7, 2) + pow(0.34 * f, 2), 1 / 2);
	ae3 = 17 / pow(pow(1.9, 2) + pow(0.45 * f, 2), 1 / 2);
	
	//Calculando el aumento de voltaje del amplificador:
	ava = ae1 * ae2 * ae3;
	
	//Mostrando el resultado:
	cout<<"El aumento de voltaje del amplificador de tres etapas para una frecuencia de "<<f<<" Hertz es de: "<<ava;
	
	return 0;
}