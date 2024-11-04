//Matriz identidad cargada automaticamente
#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"Ingrese la longitud de la matriz: ";
	cin>>n;
	
	while(n < 1){
		cout<<"Longitud no valida, intentelo de nuevo: ";
		cin>>n;
	}
	
	int identidad[n][n];
	
	//La matriz identidad (o matriz unidad) esta conformada por unos en la diagonal principal y ceros en el resto de la matriz
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j){ //Si el indice de las filas es igual al indice de las columnas, dicha posicion pertenece a la diagonal principal...
				identidad[i][j] = 1; //...entonces, se asigna el valor correspondiente (1)
			}else{ //Si los indices de filas y columnas son distintos, dicha posicion no pertenece a la diagonal principal...
				identidad[i][j] = 0; //...entonces, se asigna el valor correspondiente (0)
			}
		}
	}
	//Si quisieramos crear una matriz conformada por unos en la diagonal secundaria y ceros en el resto de la matriz reemplazariamos (i == j) por (i + j == n - 1)
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout<<identidad[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}