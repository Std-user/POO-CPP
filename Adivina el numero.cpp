//Estas pensando en el numero...?
#include <iostream>
using namespace std;

int main(){
	int max = 1000, min = 1, med; //max: valor maximo a pensar; min: valor minimo a pensar; med: valor medio entre max y min
	bool fin = false; //Variable de control. Dicta si se ha adivinado el numero o no
	char opc; //Variable para seleccionar una opcion
	
	cout<<"Piensa en un numero entre el 1 y el 1000\nPresiona cualquier tecla cuando estes listo"<<endl;
	system("pause>>null");
	system("cls");
	
	while(!fin){
		med = (min + max) / 2;
		
		cout<<"Tu numero es "<<med<<"? (S/N): "; //Pregunta si el numero es el valor medio del intervalo
		cin>>opc;
		
		while(opc != 'S' && opc != 's' && opc != 'N' && opc != 'n'){
			cout<<"Opcion invalida, intentelo de nuevo: ";
			cin>>opc;
		}
		
		if(opc == 'S' || opc == 's'){ //Si la respuesta es si...
			cout<<"He adivinado tu numero!"<<endl; 
			fin = true; //...entonces se termina el programa
		} else{ //Si no...
			cout<<"Tu numero es menor a "<<med<<"? (S/N): "; //...entonces pregunta si el numero es menor al valor medio del intervalo
			cin>>opc;
			
			while(opc != 'S' && opc != 's' && opc != 'N' && opc != 'n'){
				cout<<"Opcion invalida, intentelo de nuevo: ";
				cin>>opc;
			}
			
			if(opc == 'S' || opc == 's'){ //Si la respuesta es si...
				max = med - 1; //...entonces el valor maximo del nuevo intervalo sera igual al valor medio del intervalo actual menos 1
			} else{ //Si no...
				min = med + 1; //...entonces el valor minimo del nuevo intervalo sera igual al valor medio del intervalo actual mas 1
			}
		}
	}
}