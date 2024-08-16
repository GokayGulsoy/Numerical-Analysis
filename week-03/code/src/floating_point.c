#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "float_utils.h"

int main(int argc, char **argv)
{
        double r = 9.4 - 9.0 - 0.4;
        printf("9.4 - 9.0 - 0.4 = %g\n", r);

        double r2 = 9.4 - 0.4 - 9.0;
        printf("9.4 - 0.4 - 9.0 = %g\n", r2);

        double x = 3.0 * pow(2.0, -53.0);
        printf("3.0 * 2^(-53) = %g\n", x);

        double f = 9.4;
        printf("HEX(%g) = ", f);
        print_hex(f);
        printf("\n");

        printf("BIN(%g) = ", f);
        print_bin(f);
        printf("\n");

        return EXIT_SUCCESS;
}

/* Local Variables: */
/* mode: c          */
/* compile-command: "gcc -Wall -g floating_point.c -o floating-point -lm" */
/* End:             */
