#include <iostream>
#include <string>
#include <vector>
#include <string>
#include "Binaria.h"

using namespace std;

int menu();

int main(){
	bool salir = false;
	while (!salir){
        switch(menu()){
           	case 1:{
                cout << "Crear Arreglo:  ";
                Binaria* binary = new Binaria();
                cout << binary -> tostring();

               	break;}

	       	case 2:{
	                
	           	break;}

	       	case 3:
	           	salir = true;
	           	break;
	    }
	}
    return 0;
}

int menu(){
    int opcion;
    bool valido = true;
    do{
        cout << "-----MENU------" << endl
             << "1.- Crear Arreglos" << endl
             << "2.- Ejercicio 2" << endl
             << "3.- Salir" << endl; 

        cout << " Ingrese una opción: ";
        cin >> opcion;

        if (opcion > 0 && opcion < 4)
            valido = true;
        else {
            cout << "La opcion seleccionada es Nula, intente de nuevo ......." << endl;
        }
        cout << "----------------------" << endl;
                
    }while(!valido);
    return opcion;
}
