/*
 * Base.cpp
 *
 *  Created on: 30 sept 2026
 *      Author: Usuario
 */

#include "Base.h"
#include <iostream>

Base::Base() {
	// TODO Auto-generated constructor stub
	std::cout << " En constructor Base::Base() " << std::endl;
	a=0;
	b=0;

}

Base::~Base() {
	// TODO Auto-generated destructor stub
	std::cout << " En destructor Base::~Base()" << std::endl;
}

Base::Base(const Base &other) { //Constructor de copia
	// TODO Auto-generated constructor stub
	a=other.a;
	b=other.b; //Estos son operadores copia
	std::cout << " En constructor Base::Base(const Base &other) " << std::endl;

}


void Base::get(int &va, int &vb){
	//Paso por referencia
	va=a;
	vb=b;
}

