//
// Created by achaub001c on 12/6/2016.
//
#include <stdlib.h>
#include <stdio.h>

int j, k;
int *ptr;

int main1(void) {

    j = 1;
    k = 2;
    ptr = &k;
    printf("\n");
    printf("j has the value %d at address %p\n", j, (void *) &j);
    printf("k has the value %d at address %p\n", k, (void *) &k);
    printf("ptr has the value %p at address %p\n", ptr, (void *) &ptr);
    printf("The value of the integer pointed to by ptr => %d\n", *ptr);

    return 0;
}
