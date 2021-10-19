/**
 * Trying out how to return a struct from a fucntion
 * and also how to return NULL when the function fails.
*/
#include <stdio.h>
#include "ctype.h"

typedef struct {
    int x;
    char text[10];
}my_struct;

my_struct return_struct (int a)
{
    my_struct test;

    test.x = a;
    if (test.x > 10){
        return test;
    }
    return;
}

int main(void)
{
    my_struct main_struct;
    //printf("my_sturct size: %lu\n ", sizeof(my_struct));

    main_struct = return_struct(4);
    printf("main_struct.x = %d\n", main_struct.x);
}

