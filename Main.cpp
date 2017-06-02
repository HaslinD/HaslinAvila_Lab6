#include <iostream>
#include <string>
#include <vector>
#include <string>
#include "Binaria.h"

using namespace std;

int menu();
int menu2();

int main(){
    vector<Binaria*> binarios; 
	bool salir = false;
    int number = 0;
    int number1 = 0;
	while (!salir){
        switch(menu()){
           	case 1:{
                cout << "Crear Arreglo:  ";
                Binaria* binary = new Binaria();
                cout << binary -> tostring();

                binarios.push_back(binary);
               	break;}

	       	case 2:{
                bool salir2 = false;
                while (!salir2){
                    switch(menu2()){
                        case 1:{
                            int* ArregloNuvo;
                            cout << "Seleccione de los siguientes arreglos: " << endl;
                            for(int i = 0; i < binarios.size(); i++){
                                cout << i << " --> " << binarios[i] -> tostring() << endl;
                            }
                            cout << "Ingrese el numero del primer vector deseado: ";
                            cin >> number;
                            cout << "Ingrese el numero del segundo vector deseado: ";
                            cin >> number1;


                            cout << "La Disyuncion es: " << endl;
                            ArregloNuvo = (*binarios[number] + binarios[number1]);
                            for (int i = 0; i < 4; ++i)
                            {
                                cout << ArregloNuvo[i] << ",";
                            }
                            cout << endl;
                            
                            break;}

                        case 2:{
                            cout << "Seleccione de los siguientes arreglos: " << endl;
                            for(int i = 0; i < binarios.size(); i++){
                                cout << i << " --> " << binarios[i] -> tostring() << endl;
                            }
                            cout << "Ingrese el numero del primer vector deseado: ";
                            cin >> number;
                            cout << "Ingrese el numero del segundo vector deseado: ";
                            cin >> number1;

                            break;}

                        case 3:{
                            cout << "Seleccione de los siguientes arreglos: " << endl;
                            for(int i = 0; i < binarios.size(); i++){
                                cout << i << " --> " << binarios[i] -> tostring() << endl;
                            }
                            cout << "Ingrese el numero del primer vector deseado: ";
                            cin >> number;
                            cout << "Ingrese el numero del segundo vector deseado: ";
                            cin >> number1;

                            break;}

                        case 4:{
                            cout << "Seleccione de los siguientes arreglos: " << endl;
                            for(int i = 0; i < binarios.size(); i++){
                                cout << i << " --> " << binarios[i] -> tostring() << endl;
                            }
                            cout << "Ingrese el numero del primer vector deseado: ";
                            cin >> number;
                            cout << "Ingrese el numero del segundo vector deseado: ";
                            cin >> number1;

                            break;}

                        case 5:{
                            cout << "Seleccione de los siguientes arreglos: " << endl;
                            for(int i = 0; i < binarios.size(); i++){
                                cout << i << " --> " << binarios[i] -> tostring() << endl;
                            }
                            cout << "Ingrese el numero del primer vector deseado: ";
                            cin >> number;
                            cout << "Ingrese el numero del segundo vector deseado: ";
                            cin >> number1;

                            break;}

                        case 6:
                            salir = true;
                            break;
                    }
                }
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
             << "2.- Opciones de Binarios" << endl
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

int menu2(){
    int opcion;
    bool valido = true;
    do{
        cout << "-----SUB-MENU------" << endl
             << "1.- Disyunción" << endl
             << "2.- Conjunción" << endl
             << "3.- Implicación" << endl
             << "4.- Doble Implicación" << endl
             << "5.- Disyunción Exclusiva" << endl
             << "6.- Salir" << endl; 

        cout << " Ingrese una opción: ";
        cin >> opcion;

        if (opcion > 0 && opcion < 7)
            valido = true;
        else {
            cout << "La opcion seleccionada es Nula, intente de nuevo ......." << endl;
        }
        cout << "----------------------" << endl;
                
    }while(!valido);
    return opcion;
}
