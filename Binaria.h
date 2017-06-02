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
		int* getArregloBinario();
		int* RandomAleatorio();
		string tostring();
		//disyuncion, conjuncion, implicacion, double implicacion, disyuncion exclusiva		
		int* operator+(Binaria* binaria1){
			int* arreglo = new int[4];
			for (int i = 0; i < 4; ++i) {
				if (binaria[i] + binaria1->getArregloBinario()[i] == 0){
					arreglo[i] = 0;
				} else if (binaria[i] + binaria1->getArregloBinario()[i] == 1) {
					arreglo[i] = 1;
				} else if (binaria[i] + binaria1->getArregloBinario()[i] == 2) {
					arreglo[i] = 1;
				} 
			}
			return arreglo;
		}
		int* operator-(Binaria* binaria1){
			int* arreglo = new int[4];
			for (int i = 0; i < 4; ++i) {
				if (binaria[i] + binaria1->getArregloBinario()[i] == 0){
					arreglo[i] = 0;
				} else if (binaria[i] + binaria1->getArregloBinario()[i] == 1) {
					arreglo[i] = 0;
				} else if (binaria[i] + binaria1->getArregloBinario()[i] == 2) {
					arreglo[i] = 1;
				} 
			}
			return arreglo;
		}
		int* operator*(Binaria* binaria1){
			int* arreglo = new int[4];
			for (int i = 0; i < 4; ++i) {
				if (binaria[i] == 0 && binaria1->getArregloBinario()[i] == 0){
					arreglo[i] = 0;
				} else if (binaria[i] == 0 && binaria1->getArregloBinario()[i] == 1) {
					arreglo[i] = 1;
				} else if (binaria[i] == 1 && binaria1->getArregloBinario()[i] == 0) {
					arreglo[i] = 0;
				} else if (binaria[i] == 1 && binaria1->getArregloBinario()[i] == 1) {
					arreglo[i] = 0;
				} 
			}
			return arreglo;
		}
		int* operator/(Binaria* binaria1){
			int* arreglo = new int[4];
			for (int i = 0; i < 4; ++i) {
				if (binaria[i] == 0 && binaria1->getArregloBinario()[i] == 0){
					arreglo[i] = 0;
				} else if (binaria[i] == 0 && binaria1->getArregloBinario()[i] == 1) {
					arreglo[i] = 1;
				} else if (binaria[i] == 1 && binaria1->getArregloBinario()[i] == 0) {
					arreglo[i] = 1;
				} else if (binaria[i] == 1 && binaria1->getArregloBinario()[i] == 1) {
					arreglo[i] = 0;
				} 
			}
			return arreglo;
		}
		int* operator^(Binaria* binaria1){
			int* arreglo = new int[4];
			for (int i = 0; i < 4; ++i) {
				if (binaria[i] == 0 && binaria1->getArregloBinario()[i] == 0){
					arreglo[i] = 1;
				} else if (binaria[i] == 0 && binaria1->getArregloBinario()[i] == 1) {
					arreglo[i] = 0;
				} else if (binaria[i] == 1 && binaria1->getArregloBinario()[i] == 0) {
					arreglo[i] = 0;
				} else if (binaria[i] == 1 && binaria1->getArregloBinario()[i] == 1) {
					arreglo[i] = 1;
				} 
			}
			return arreglo;
		}

};

#endif