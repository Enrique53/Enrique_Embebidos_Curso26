/*
 * Vector_test.cpp
 *
 *  Created on: 28 sept 2026
 *      Author: Usuario
 */
#include "Vector.h"
#include <gtest/gtest.h>

TEST(Vector, const1) { //Primer nombre el de la clase, el segundo ponemos el que queramos
	Vector obj; //Usas el constructor 1 porque lo detecta por el numero de argumentos
	ASSERT_FALSE(obj.set(0,1)); //Ponme a uno el elemento cero
}

TEST(Vector, const2) { //Primer nombre el de la clase, el segundo ponemos el que queramos
	Vector obj(2); //Usas el constructor 2 porque lo detecta por el numero de argumentos
	ASSERT_TRUE(obj.set(0,1)); //Ponme a uno el elemento cero
	int val;
	ASSERT_TRUE(obj.get(0,val)); //Accedo a la pos 0 y el resultado me lo guarda en val
	ASSERT_EQ(val,1); //Comprobamos que val vale 1

	ASSERT_TRUE(obj.get(1,val)); //Accedo a la pos 1 y el resultado me lo guarda en val
	ASSERT_EQ(val,0); //Comprobamos que val vale 1
}



