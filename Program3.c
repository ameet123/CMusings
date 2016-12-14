//
// Created by achaub001c on 12/8/2016.
//
#include <stdio.h>
#include "MyFunctions.h"

char strA[80] = "A string to be used for demonstration purposes";
char strB[80] = "1234567890123456789012345678901234567890123456";

int main3(void) {
    char *pA;
    char *pB;
    puts(strA);
    pA = strA;
    puts(pA);
    pB = strB;
    putchar('\n');
    while (*pA != '\0') {
        *pB++ = *pA++;
    }
    *pB = '\0';
    pB = strB;
    puts(strB);
    // using strlen
    printf("Using strlen() length of strA=>%d\n", my_strlen(strA));
    return 0;
}
