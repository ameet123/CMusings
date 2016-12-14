//
// Created by achaub001c on 12/12/2016.
//

#include <stdio.h>
#include <malloc.h>
#include "MyFunctions.h"

int my_strlen(const char *a) {
    int cnt = 0;
    while (*a) {
        cnt++;
        *a++;
    }
    printf("Count==>%d\n", cnt);
    return cnt;
}

/**
 * first move the cursor to the end of the first string
 * returns a pointer to the concatenated string
 * @param dest
 * @param source
 * @return
 */
char *my_strcat(char *dest, const char *source) {
    printf("Original dest address = %c value=%c\n", dest, *dest);
    int initLen = my_strlen(dest);
    printf("init length=%d\n", initLen);
    int concatLen = my_strlen(dest) + my_strlen(source) + 1;
    printf("New concat length===>%d\n", concatLen);
    // create new string
    char *concat = malloc(concatLen);
    // first copy dest
    my_strcopy(concat, dest);
    printf("Now the concat is %s\n", concat);
    printf("New char to start FROM---> %c is it null?%s\n", concat[initLen],
           concat[initLen] == '\0' ? "true" : "false");
    // now copy the next string
    my_strcopy(&concat[initLen], source);
    printf("---> concat=>%s concat_add=%p\n", concat, concat);
    return concat;
}

char *my_strcopy(char *dest, const char *source) {
    char *p = dest;
    while (*source) {
        *p++ = *source++;
    }
    *p = '\0';
    printf("==>copied string = %c\n", *dest);
    return dest;
}