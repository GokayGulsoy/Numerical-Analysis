#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
        const char *s1 = "Hello ";
        const char *s2 = "World!";

        int length = strlen(s1) + strlen(s2) + 1;
        char *s = (char *)malloc(length * sizeof(char));
        strcpy(s, s1);
        strcat(s, s2);
        printf("Combined String: %s\n", s);
        free(s);

        return 0;
}
