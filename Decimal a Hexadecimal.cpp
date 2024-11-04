//Decimal a Hexadecimal
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int nDecimal, dHexadecimal; //nDecimal: Numero decimal a convertir; dHexadecimal: Cantidad de digitos que tendra nDecimal luego de ser convertido
	
	cout<<"Ingrese el numero que desea convertir en hexadecimal: ";
	cin>>nDecimal;
	
	while(nDecimal < 0){
		cout<<"Este numero no puede ser convertido en hexadecimal, intente con otro: ";
		cin>>nDecimal;
	}
	
	dHexadecimal = (log2(nDecimal) / log2(16)) + 1; //Calculando el numero de digitos que tendra nDecimal luego de ser convertido
	
	char hexadecimal[dHexadecimal]; //Arreglo de tipo caracter que almacenara todos los digitos del nuevo numero hexadecimal (nDecimal convertido => hexadecimal[dHexadecimal])
	
	for(int i = 0; i < dHexadecimal; i++){ //Se itera sobre cada digito hexadecimal, comenzando desde el digito menos significativo
		if(nDecimal % 16 < 10){ //Si el resto de la division del numero decimal por 16 es menor que 10...
			hexadecimal[i] = (nDecimal % 16) + 0x30; //...entonces, se convierte directamente al caracter ASCII correspondiente (0 - 9)
		}else{ //Si el resto de la division del numero decimal por 16 es mayor o igual a 10...
			hexadecimal[i] = ((nDecimal % 16) - 10) + 'A'; //...entonces, se convierte al caracter ASCII correspondiente (A - F)
		}
		nDecimal = nDecimal / 16; //El numero decimal se divide por 16 para obtener el siguiente digito
	}
	
	for(int i = dHexadecimal - 1; i >= 0; i--){ //Se imprime cada digito hexadecimal presente en hexadecimal[] en orden inverso, ya que se calcularon partiendo desde el digito menos significativo
		cout<<hexadecimal[i]<<" ";
	}
	
	return 0;
}