//Hace mucho calor, no?
#include <iostream>
using namespace std;

int main(){
	float Fahrenheit, Celsius;
	
	cout<<"Ingrese la temperatura (en escala Fahrenheit): ";
	cin>>Fahrenheit;
	
	Celsius =(5 * (Fahrenheit - 32)) / 9;
	cout<<"Esos son "<<Celsius<<" grados Celsius!";
	
	return 0;
}