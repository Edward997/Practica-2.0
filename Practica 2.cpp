#include <iostream>
#include <conio.h>

using namespace std;

int i,mayor=INT_MIN,a[10];

int main(){
	cout<< "Ingrese 10 numeros para determinar el mayor: " << endl;
	for(int i=0; i<10; i++){
		cout<<"Introduzca un numero: " <<endl;
		cin>> a[i];	                                
	}
	
	for(int *puntero=&a[0]; puntero<= &a[9]; puntero++){
		if (mayor<*puntero){
			mayor=*puntero;
		}
	}
	
	cout << "El numero mayor ingresado es " <<mayor<<endl;
  	system("pause");
	
	return 0;
}
