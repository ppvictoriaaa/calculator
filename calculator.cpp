#include "calculator.h"

int Calculator::Add (double a, double b)
{

	return a + b + 0.55;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.55;
}
