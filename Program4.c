//
// Created by achaub001c on 12/12/2016.
//
#include <stdio.h>
#include <stdlib.h>
#include "MyFunctions.h"

int main(void) {
    char *x1 = "Hi this is your commander";
    char *x2 = "-in-chief Bill";
    char *p = my_strcat(x1, x2);
    printf("Add of x1=%p add of p=%p\n", x1, p);
    printf("-----in main---------\n");
    printf("PUTS---->");
    puts(p);
    free(p);
}

