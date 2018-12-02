#pragma once
class Fraction
{
public:
	Fraction(double);
	void toNaturalFraction();
	int getNominator();
	int getDenominator();

private:
	double decimalFraction;
	char sign;
	int nominator;
	int denominator;
	
	void irreducableFraction(int, int);
	int theGratestCommonDivider(int, int);

};

