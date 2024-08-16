#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "sqrt_newton.h"

int main(int argc, char** argv)
{
        double tol = 1.0e-2;
        if (argc >= 2) {
                tol = atof(argv[1]);
        }
        printf("Tolerance = %.2g\n", tol);

        for (double x = 0.0; x < 10.0; x += 1.0) {
                double c_sqrt = sqrt(x);
                double n_sqrt = sqrt_newton(x, tol);
                printf("x= %.1f, sqrt(x)= %.5f, sqrtn(x)= %.5f\n",
                       x, c_sqrt, n_sqrt);
        }

        return 0;
}
