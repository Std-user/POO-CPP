//Serie de Fibonacci
#include <iostream>
using namespace std;

int main(){
	int n, a1 = 1, a2 = 1, an;
	//En la serie de Fibonacci, los dos primeros numeros son 1, y luego, cada uno es la suma de los 2 anteriores
	
	cout<<"Ingrese un numero entero y positivo que servira para calcular la serie de Fibonacci hasta esa posicion: ";
	cin>>n;
	
	while(n < 1){
		cout<<"El numero introducido no cumple con los criterios, por favor, intentelo de nuevo: ";
		cin>>n;
	}
	
	cout<<"La serie de Fibonacci hasta el lugar #"<<n<<" es: "<<endl;
	
	if(n == 1){
		cout<<a1;
	}else if(n == 2){
		cout<<a1<<" "<<a2;
	}else{
		cout<<a1<<" "<<a2<<" ";
		
		for(int i = 3; i <= n; i++){
			an = a1 + a2;
			cout<<an<<" ";
			
			a1 = a2;
			a2 = an;
		}
	}
	
	return 0;
}