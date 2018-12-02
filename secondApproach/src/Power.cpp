#include "Power.h"




double Power::countPower(double base, int indexNominator, int indexDenominator)
{

	this->indexDenominator = indexDenominator; //jeœli zero to coœ rób
	this->indexNominator = indexNominator;	//jeœli zero to coœ rób
	//jeœli s¹ takie same to zwracamy result
	this->base=base ;

	result = exponentiation(base, indexNominator);

	if (indexDenominator != 1)
		result = root(result, indexDenominator);


	return result;
}

double Power::exponentiation(double base, int index)
{
	double result = 1;
	
	if (index == 0)
		return 1;
	else
	{
		do
		{
			index--;
			result *= base;
		} while (index > 0);
		
		return result;
	}
	
}

double Power::root(double base, int index)
{	
	double result = base;
	
	while (abs(base - exponentiation(result,index)) > e)
	{
		result = (1.0/index)*(result * (index - 1)+(base / exponentiation(result, index - 1)));

	}


	return result;
}

double Power::abs(double number)
{
	return (number > 0) ? number : -number;
}


