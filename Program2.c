//
// Created by achaub001c on 12/8/2016.
//
#include <stdio.h>

int my_array[] = {1, 23, 17, 4, -5, 100};
int *ptr;

int main2(void) {
    int i;
    ptr = my_array;
    printf("\n\n");
    for (i = 0; i < 6; i++) {
        printf("my_array[%d] = %3d   ", i, my_array[i]);
        printf("ptr + %d = %3d\n", i, *++ptr);
    }
    return 0;
}


