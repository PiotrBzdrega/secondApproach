#include <iostream>
#include <string>
#include <bitset>
#include <Windows.h>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <tuple>
#include <random>
#include "Fraction.h"
#include "Power.h"

void terminateMain() { std::cout << std::endl;	 system("pause"); }

int main()
{
	Power power;
	int x = 2;

	std::cout << power.countPower(10,1,3) << std::endl;



	/*int number = -3189;
	double dnumber = number/100.0;
	Fraction fraction(dnumber);

	std::cout <<"Decimal Fraction: "<< (dnumber) <<" is equal to normal :" << std::endl << fraction.getNominator() << std::endl << "- " << std::endl << fraction.getDenominator() << std::endl;
*/
	terminateMain();
}







