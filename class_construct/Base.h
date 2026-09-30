/*
 * Base.h
 *
 *  Created on: 30 sept 2026
 *      Author: Usuario
 */

#ifndef BASE_H_
#define BASE_H_
#include <iostream>

class Base {
protected:
	int a;
	int b;
public:
	static  int comun;
	int global();
	void get(int &va, int &vb); //Paso por referencia
	virtual int sum(); //Puede ser reemplazado por un metodo de la derivada
	Base();
	virtual ~Base();
	Base(const Base &other); //InLine. cuando ponga un argumento, el compilador sustituye la llamada y pondra el codigo entre llaves
	Base(int va){
		a=va;
		b=0;
		std::cout << " En constructor Base::Base(int va) " << std::endl;
	}

};

#endif /* BASE_H_ */
