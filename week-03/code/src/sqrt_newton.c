#include "sqrt_newton.h"

#include <math.h>
#include <stdbool.h>

bool sqrt_good_enough(double guess, double y, double tol)
{
        return fabs(guess * guess - y) < tol;
}

double sqrt_improve(double guess, double y)
{
        return (guess + y / guess) / 2.0;
}

double sqrt_newton(double y, double tol)
{
        double guess = 1.0;
        while (!sqrt_good_enough(guess, y, tol))
                guess = sqrt_improve(guess, y);
        return guess;
}
