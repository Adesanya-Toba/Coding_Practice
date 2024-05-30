/**
 * Trying out how to return a struct from a fucntion
 * and also how to return NULL when the function fails.
*/
#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int x;
    char text[10];
}my_struct;

int return_struct (int a, my_struct *test)
{
    test->x = a;
    if (test->x > 10){
        return 1;
    }
    return 0;
}

int main(void)
{
    my_struct main_struct;

    //printf("my_sturct size: %lu\n ", sizeof(my_struct));

    int ret = return_struct(13, &main_struct.x);
    printf("main_struct.x = %d\n", main_struct.x);
    printf("Return = %d\n", ret);

    // Does the bool type exist in C? Yes, in "stdbool.h"
    bool hello = false;
    printf("Boolean: %d", hello);
}

