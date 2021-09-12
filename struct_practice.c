/**
 * Practicing with structs!
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct
{
    int x;
    int y;
}point;

typedef struct 
{
   point pt1;
   point pt2;
}rect;

point test;


int main(void)
{
    // point *help = (point*)malloc(sizeof(point));
    point *help;

    test.x = 30;
    test.y = 90;
    // help->x = 40;
    // help->y = 26;

    // here, instead of allocating memory with malloc, 
    //I just used the same memory used by test i.e. I gave help the address of test to use
    help = &test; 

    // uint8_t num;
    // scanf("%hhd",&num);
    // printf("Is this your number: %d\n", num);

    printf("test.x: %d\n", test.x);
    printf("test.y: %d\n\n", test.y);

    // Changing the value of test.y via the pointer help
    printf("Changing the value of test.y via a pointer\n");
    help->y  = 87;
    printf("test.y: %d\n\n", test.y);

    printf("help.x: %d\n", help->x);
    printf("help.y: %d\n", help->y);

    // free(help);
}