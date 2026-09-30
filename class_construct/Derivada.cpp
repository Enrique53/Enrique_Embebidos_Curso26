/*
 * Derivada.cpp
 *
 *  Created on: 30 sept 2026
 *      Author: Usuario
 */

#include "Derivada.h"
#include <iostream>

Derivada::Derivada(int a, int b) { //Cargo en a el valor de a y en b el de b
	Base::a=a;
	Base::b=b;
	std::cout << " En constructor Derivada::Derivada(int a, int b) " << std::endl;
	// TODO Auto-generated constructor stub

}

Derivada::~Derivada() {
	// TODO Auto-generated destructor stub
	std::cout << " En destructor Derivada::~Derivada()" << std::endl;
}

int Derivada::sum(){
	return a + b + 100;
}
