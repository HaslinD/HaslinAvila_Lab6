#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

#ifndef BINARIA_H
#define BINARIA_H

class Binaria{
	private:
		int* binaria;

	public:
		Binaria();
		int* RandomAleatorio();
		string tostring();
		//disyuncion, conjuncion, implicacion, double implicacion, disyuncion exclusiva		
		Binaria* disyuncion(Binaria*);
		Binaria* conjuncion(Binaria*);
		Binaria* implicacion(Binaria*);
		Binaria* dobleimplicacion(Binaria*);
		Binaria* disyuncionexclu(Binaria*);


};

#endif