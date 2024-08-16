


#include "float_utils.h"

#include <stdio.h>

void print_hex(double d)
{
        unsigned char *p = (unsigned char *)&d;
        printf("0x");
        for (int i = 0; i < 8; ++i) {
                printf("%X", p[7-i]);
                if (i & 1)
                        printf(" ");
        }
}

void print_bin(double d)
{
        unsigned char *p = (unsigned char *)&d;
        printf("0b");
        int k = 0;
        for (int i = 0; i < 8; ++i) {
                unsigned char byte = p[7-i];
                for (int j = 7; j >=0; --j, ++k) {
                        printf("%s", (byte & (1 << j)) ? "1" : "0");
                        if (k == 0 || k == 11)
                                printf(" ");
                }
        }
}
