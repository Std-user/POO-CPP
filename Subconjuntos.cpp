//Cuantos subconjuntos hay en el conjunto?
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int num, numSubconjuntos;
	
	cout<<"Ingrese un numero entero y positivo: ";
	cin>>num;
	
	//Haciendo que se cumpla las condiciones para poder seguir con el programa
	while(num < 1){
		cout<<num<<" no cumple con los criterios, intentelo de nuevo: ";
		cin>>num;
	}
	
	//Numero total de subonjuntos, incluyendo el conjunto vacio es 2^n
	numSubconjuntos = pow(2, num);
	
	//Itera sobre todos los posibles subconjuntos no vacios
	for(int i = 1; i < numSubconjuntos; i++){ 
		for(int j = 0; j < num; j++){ 
			//Si el j-esimo bit de subconjunto esta en 1...
			if(i & (1 << j)){
				cout<<j + 1<<" "; //...entonces significa que el elemento correspondiente esta en el subconjunto y se imprime
			}
		}
		cout<<endl;
	}
	
	return 0;
}