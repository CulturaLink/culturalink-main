#include "pch.h"
#include "../culturalink-main/Calculadora.h"

// Proves comparant si 2 valors són iguals
TEST(TestCalculadora, MultiplicaPositius) {
	Calculadora calc;
	EXPECT_EQ(calc.multiplica(2, 10), 21);
}
TEST(TestCalculadora, MultiplicaNegatius) {
	Calculadora calc;
	EXPECT_EQ(calc.multiplica(2, -10), -20);
	EXPECT_EQ(calc.multiplica(-2, 10), -20);
	EXPECT_EQ(calc.multiplica(-2, -10), 20);
}
TEST(TestCalculadora, Divide) {
	Calculadora calc;
	EXPECT_EQ(calc.divide(10, 2), 5);
	EXPECT_EQ(calc.divide(20, 4), 5);
	EXPECT_EQ(calc.divide(-10, 2), -5);
}
// Proves comparant si 2 valors reals (float) són iguals
TEST(TestCalculadora, ValorsReals) {
	Calculadora calc;
	// Al comparar reals, es pot perdre una mica de precisió
	// si feu servir 12.500001 (4 zeros) la comparació dóna correcte,
	// però si treieu un 0 no
	EXPECT_FLOAT_EQ(calc.divide(25, 2), 12.500001);
}
// Proves comparant si s'activa una excepció
TEST(TestCalculadora, DivideZero) {
	Calculadora calc;
	EXPECT_THROW(calc.divide(10, 0), std::invalid_argument);
}
