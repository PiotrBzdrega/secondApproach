#include "Fraction.h"



Fraction::Fraction(double decimalfraction)
{	
	sign = (decimalfraction >=0) ?  'p' : 'n';
	if (decimalfraction != 0)
	{
		switch (sign)
		{
		case 'n': decimalFraction = decimalfraction*(-1);
			break;
		default: decimalFraction = decimalfraction;
			break;
		}
		toNaturalFraction();
	}		
	else
	{
		decimalFraction=denominator=nominator = decimalfraction;
	}
		
}

int Fraction::getNominator()
{
	return (sign=='p') ? nominator : -nominator;
}

int Fraction::getDenominator()
{
	return denominator;
}

void Fraction::toNaturalFraction()
{
	int decimalPlaces = 1;
	double fraction = decimalFraction;

	while (fraction - (int)fraction)
	{
		fraction *= 10;
		decimalPlaces *= 10;
	}

	irreducableFraction(fraction, decimalPlaces);
}

void Fraction::irreducableFraction(int nominator, int denominator)
{
	int divider = theGratestCommonDivider(nominator, denominator);

	this->nominator = nominator / divider;
	this->denominator = denominator / divider;
}

int Fraction::theGratestCommonDivider(int firstNumber, int secondNumber)
{
	while (firstNumber != secondNumber)
	{
		if (firstNumber > secondNumber)
			firstNumber = firstNumber - secondNumber;
		else
			secondNumber = secondNumber - firstNumber;

	}
	return firstNumber;
}

