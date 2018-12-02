#include "pch.h"
#include "../secondApproach/src/Fraction.h"
#include "../secondApproach/src/Power.h"

//https://www.ibm.com/developerworks/aix/library/au-googletestingframework.html

TEST(FractionClass, negativeFraction) {
	Fraction fraction(-3.16);

  EXPECT_EQ(fraction.getNominator(), -79);
  EXPECT_EQ(fraction.getDenominator(), 25);

}


TEST(FractionClass, positiveFraction) {
	Fraction fraction1(3.16);

	EXPECT_EQ(fraction1.getNominator(), 79);
	EXPECT_EQ(fraction1.getDenominator(), 25);

}

TEST(FractionClass, zeroFraction) {
	Fraction fraction2(0);

	EXPECT_EQ(fraction2.getNominator(), 0);
	EXPECT_EQ(fraction2.getDenominator(), 0);


}

TEST(PowerClass, natiuralPower) {
	Power power;
	EXPECT_DOUBLE_EQ(power.countPower(3, 2), 9);
}

TEST(PowerClass, realPower) {
	Power power;
	EXPECT_DOUBLE_EQ(power.countPower(3.1, 2), 9.61);
}

TEST(PowerClass, naturalRootPower) {
	Power power;
	EXPECT_NEAR(power.countPower(4, 1, 2) , 2, 0.001);
}

TEST(PowerClass, realRootPower) {
	Power power;
	EXPECT_NEAR(power.countPower(10, 1, 3), 2.15, 0.01);
}

TEST(PowerClass, zeroBase) {
	Power power;
	EXPECT_DOUBLE_EQ(power.countPower(0, 2, 3), 0);
}

TEST(PowerClass, negativeBase) {
	Power power;
	EXPECT_DOUBLE_EQ(power.countPower(-2, 3, 1), -8);
}

TEST(PowerClass, negativeIndexNominator) {
	Power power;
	EXPECT_DOUBLE_EQ(power.countPower(8, -3, 1), 2);
}

TEST(PowerClass, negativeIndexDenominator) {
	Power power;
	EXPECT_DOUBLE_EQ(power.countPower(8, 3, -1), 2);
}