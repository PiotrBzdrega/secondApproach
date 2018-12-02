#pragma once
class Power
{
public:

	double countPower(double base, int indexNominator,int indexDenominator = 1);
private:
	int indexNominator;
	int indexDenominator;
	double base;
	double result;
	double exponentiation(double base, int index);
	double root(double base, int index);
	const double e = 0.01;
	double abs(double number);

};

