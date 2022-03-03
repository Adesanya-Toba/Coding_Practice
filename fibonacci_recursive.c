/*  Fibonacci sequence using recursion */
#include <stdio.h>

#define MAXIMUM 20

long buffer[MAXIMUM];

int fib_recur(int x)
{   
    int i = 0;
    if(x == 1)
        return 1;
    else if (x == 0)
        return 0;
    
    buffer[--x] = fib_recur(x - 1) + fib_recur(x - 2);
    return buffer[x];
}

int main(void)
{
    int var = 6;

    int fib = fib_recur(var);
    fib_recur(var);
    printf("Fibonacci of %d is: %d\n", var, fib);

    printf("Fibonacci sequence of %d is: ", var);
    for (int i = 0; i< MAXIMUM; i++){
        printf("%ld ", buffer[i]);
    }
    printf("\n");
}
