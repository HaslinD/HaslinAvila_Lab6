#include "Binaria.h"
#include <sstream>
#include <string>
using namespace std;

Binaria::Binaria(){
	binaria = RandomAleatorio();
}

int* Binaria::getArregloBinario(){
	return binaria;
}

int* Binaria::RandomAleatorio(){
    int random;
    int* arreglo;
    for (int i = 0; i < 4; ++i)
    {
    	arreglo = new int[4];
    }
    for(int i = 0; i < 4; ++i){
        random = rand() % 12 + 1;
        if(random % 2 == 0){
            arreglo[i] = 0;
        } else if(random % 2 == 1){
            arreglo[i] = 1;
        }
    }
    return arreglo;
}

string Binaria::tostring(){
	stringstream alpha;
	for (int i = 0; i < 4; ++i)
	{
		alpha << binaria[i] << ",";		
	}
	alpha << endl;
	return alpha.str();
}

