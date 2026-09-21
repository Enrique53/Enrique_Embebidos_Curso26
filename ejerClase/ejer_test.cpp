/*
 * ejer_test.cpp
 *
 *  Created on: 21 sept 2026
 *      Author: Usuario
 */


int suma(int d1, int d2);

#include <gtest/gtest.h>

TEST(suma, test1) {
	int d1=20;
	int d2=40;
	int res=60;

	ASSERT_EQ(res, suma(d1,d2));
}




