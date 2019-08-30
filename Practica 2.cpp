#include <iostream>
#include <conio.h>

using namespace std;

struct direccion{
	char call[20];
	int tel;
	char ciudad[20];
};

struct empleado{
	char nombre[20];
	char genero[20];
	int edad;
	struct direccion dir;
};

int main(int argc, char** argv) {
	struct empleado E1[5];
	struct empleado *apuntador;
	
	apuntador=&E1[0];
	
	for(int i=0; i<5; i++){
		
		cout<<"nombre: ";
		cin.getline(E1[i].nombre,20);
		cout<<"edad: ";
		cin>>E1[i].edad;
		cout<<"calle: ";
		fflush(stdin);
		cin.getline(E1[i].dir.call,20);
	}
	
	cout<<endl<<"nombre guardado: " <<apuntador->nombre;
	cout<<endl<<"edad guardada: " <<apuntador->edad;
	cout<<endl<<"genero guardado: " <<apuntador->genero;
	cout<<endl<<"calle guardada: " <<apuntador->dir.call;
	
	return 0;
}
