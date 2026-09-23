/*
 * ejer.cpp
 *
 *  Created on: 21 sept 2026
 *      Author: Usuario
 */
#include <iostream>
#include <cstdlib>

int suma(int d1, int d2) {
	std::cout << "suma(int, int): " << d1 << " + " << d2 << std::endl;
    return d1+d2;
}


int suma() {
	std::cout << "suma(): 1 + 2" << std::endl;
    return 1+2;
}

int suma(int a) {
	std::cout << "suma(int): " << a << " + 2" << std::endl;
    return a+2;
}

int suma(float a, float b) {
	std::cout << "suma(float, float): " << a << " + " << b << std::endl;
    return a+b;
}


/*
int main(int narg, char *arg[]) {
    int d1=50;
    int d2=100;

    if(narg > 1) {  // 1 argumento
        d1=std::atoi(arg[1]);
    }

    if(narg > 2) {  // 2 argumentos
        d2=std::atoi(arg[2]);
    }
    std::cout <<" suma " << d1 << " y " << d2 << " = " << suma(d1,d2) << std::endl;
    return 0;
}

 */


