/**
 * Changing the size of an int.
 * It only seems to work inside of a struct declaration
*/

#include <stdio.h>

#define LOOP_COUNT 50

typedef struct {
    int num2:2;     // :2 means this int is truncated to store only two bits (0 or 1)
    int num4:4;     // :4 means this int is truncated to store only 4 bits
    int num6:6;     // :6 means this int is truncated to store only 6 bits
}smaller_int_t;


int main(void)
{
    smaller_int_t test = {  // struct initialization
        .num2 = 0,
        .num4 = 0,
        .num6 = 0 };

    for (int i = 0; i < LOOP_COUNT; i++)
    {
        printf("%d \t%d \t%d\n", test.num2, test.num4, test.num6);

        test.num2++;
        test.num4++;
        test.num6++;
    }
}