/*
 * ejer_test.cpp
 *
 *  Created on: 21 sept 2026
 *      Author: Usuario
 */


int suma(int d1, int d2);
int suma();
int suma(int a);
int suma(float a, float b);

#include <gtest/gtest.h>


TEST(suma, test1) {
	int d1=20;
	int d2=40;
	int res=60;

	ASSERT_EQ(res, suma(d1,d2));
}

TEST(suma, SinArgumento) {
	int res=3;

	ASSERT_EQ(res, suma());
}

TEST(suma, UnArgumento) {
	int a=20;
	int res=22;

	ASSERT_EQ(res, suma(a));
}

TEST(suma, DosArgumentos) {
    float a=1.5f;
    float b=2.5f;
    float res=4.0f;

    EXPECT_FLOAT_EQ(res, suma(a,b));
}



