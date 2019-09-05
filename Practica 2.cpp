#include <iostream>
#include <conio.h>

using namespace std;
/// sus = Nombre del suscriptor
///tiempo = tiempo de la suscripcion
///rev = Nombre de la revista
struct revista{
	char sus[20];
	int tiempo;
	char rev[20];
};

int main(int argc, char** argv) {
	struct revista S1[5];
	struct revista *apuntador;
	int op;
	apuntador=&S1[0];
	
	
	cout<<endl<<"Seleccione una opcion: " <<endl;
    cout<<"1.- Nuevo suscriptor " << endl;
    cout<<"2.- Checar suscriptores" << endl;
    cout<<"3.- Editar suscriptor" << endl;
    cout<< "-->  ";
    cin>>  op;
    
    switch (op){
    	case 1: cout<<" Nuevo suscriptor" <<endl;
    			for(int i=0; i<10; i++){
					cout<<"Nombre Suscriptor: ";
					fflush(stdin);
					cin.getline(S1[i].sus,20);
					cout<<"Tiempo de las suscripcion (meses): ";
					cin>>S1[i].tiempo;
					fflush(stdin);
					cout<<"Nombre revista: ";
					cin.getline(S1[i].rev,20);
					
				}
    		break;
    	
    	case 2: cout<<" Checar suscriptores";
    		break;
    		
    	case 3: cout<<" Editar suscriptor ";
    		break;
    	
    	default : cout<<" ";
	}
	cout<<endl<<"Nombre suscriptor: " <<apuntador->sus;
	cout<<endl<<"Tipo de revista: " <<apuntador->tiempo;
	cout<<endl<<"Nombre de la revista: " <<apuntador->rev;
	
	return 0;
}
