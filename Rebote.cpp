/*
	Cuando una pelota de hule especial se deja caer desde una altura dada (en metros), su
	velocidad de impacto (en metros/segundo) cuando golpea el suelo esta dada por la formula
	velocidad = sqrt(2 * g * altura). La pelota rebota entonces a 2/3 de la altura desde la cual
	cayo la ultima vez. Usando esta informacion, calcule la velocidad de impacto y alturra alcanzada
	en cada rebote
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float v, g, h; //v: velocidad; g: gravedad; h: altura.
	
	//Solicitando al usuario los valores iniciales:
	cout<<"Ingrese la altura de la cual sera lanzada la pelota: ";
	cin>>h;
	
	cout<<"Ingrese la gravedad del lugar del experimento: ";
	cin>>g;
	
	//Realizando los calculos y mostrando los resultados:
	cout<<"\nAltura inicial: "<<h;
	
	for(int i = 1; i < 4; i++){
		v = sqrt(2 * g * h);
		cout<<"\nVelocidad de impacto del rebote #"<<i<<": "<<v;
		
		h = (2 * h) / 3;
		cout<<"\nAltura alcanzada por el rebote #"<<i<<": "<<h;
	}
	
	return 0;
}