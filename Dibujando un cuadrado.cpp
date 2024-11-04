//El cuadrado
#include <iostream>
using namespace std;

int main(){
	int lado;
	char caracter;
	
	cout<<"Ingrese un numero entero, positivo y par que servira como lado del cuadrado: ";
	cin>>lado;
	
	while(lado < 1 || lado % 2 != 0){
		cout<<"El numero ingresado no cumple con los criterios, por favor, intentelo de nuevo: ";
		cin>>lado;
	}
	
	cout<<"Ingrese un caracter que servira como cuerpo del lado: ";
	cin>>caracter;
	
	for(int i = 1; i <= lado; i++){
		for(int j = 1; j <= lado; j++){
			cout<<caracter<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}