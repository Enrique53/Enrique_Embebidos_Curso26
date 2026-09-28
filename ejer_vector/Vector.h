/*
 * Vector.h
 *
 *  Created on: 28 sept 2026
 *      Author: Usuario
 */

#ifndef VECTOR_H_
#define VECTOR_H_

class Vector {
public:
	Vector(); 		// Array vacio
	Vector(int nelem); //Array con N elementos
	~Vector();
	bool set(int pos, int val); //Si es true te dice que ha podido crearlo
	bool get(int pos, int &val); //Paso por referencia

private:
	int n; // numero de elementos
	int *dat; //array de valores
};

#endif /* VECTOR_H_ */
