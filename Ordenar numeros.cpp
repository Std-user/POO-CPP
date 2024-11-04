//Ordenar (en orden ascendente) un conjunto de numeros de longitud n
#include <iostream>
using namespace std;

int main(){
	int n; //Longitud del conjunto de numeros a ordenar
	float aux; //Variable auxiliar que permitira ordenar los numeros
	
	cout<<"Cuantos numeros desea ordenar?"<<endl;
	cin>>n;
	
	while(n < 2){
		cout<<"Longitud del conjunto invalida, por favor, intentelo de nuevo: ";
		cin>>n;
	}
	
	float conjunto[n];
	
	cout<<"Por favor, introduzca el conjunto de numeros: "<<endl;
	
	//Llenando el conjunto con los valores introducidos por el usuario
	for(int i = 0; i < n; i++){
		cin>>conjunto[i];
	}
	
	//Ordenando el conjunto usando Bubble Sort
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - 1; j++){
			if(conjunto[j] > conjunto[j + 1]){
				aux = conjunto[j];
				conjunto[j] = conjunto[j + 1];
				conjunto[j + 1] = aux;
			}
		}
	}
	//Si desearamos ordenar el conjunto en orden descendente, solo cambiariamos conjunto[j] > conjunto[j + 1] por conjunto[j] < conjunto[j + 1]
	
	
	//Imprimiendo el conjunto ordenado
	for(int i = 0; i < n; i++){
		cout<<conjunto[i]<<" ";
	}
	
	return 0;
}