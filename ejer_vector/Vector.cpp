/*
 * Vector.cpp
 *
 *  Created on: 28 sept 2026
 *      Author: Usuario
 */

#include "Vector.h"
#include <iostream>

Vector::Vector() {
	n=0;
	dat = nullptr;
	std::cout << " Estoy en el constructor 1 Vector() " << std::endl;
}

//Constructor con tamaño array
Vector::Vector(int nelem) {
	n=nelem;
	dat=new int[n] {0}; //Inicializas todo a 0
	std::cout << " Estoy en el constructor 2 Vector(int nelem) " << std::endl;
}


Vector::~Vector() {
	if(n>0)
	{
		delete [] dat;
	}
	n=0;
	dat=nullptr;
	std::cout << " Estoy en el destructor ~Vector() " << std::endl;
}


//set
bool Vector::set(int pos, int val){
	if (pos>=0 && pos<n)
	{
		dat[pos]=val;
		return true;
	}
	std::cout << "Error en método set" << std::endl;
	return false;

}

//get
bool Vector::get(int pos, int &val){
	if (pos>=0 && pos<n)
	{
		val=dat[pos];
		return true;
	}
	std::cout << "Error en método get" << std::endl;
	return false;

}





