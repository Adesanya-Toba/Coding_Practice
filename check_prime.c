/* Check if n is a prime */
#include <stdio.h>
#include <math.h>

void checkPrime(long n)
{
    long temp = 0;

    if (n == 1) {
        printf("%ld is not a prime number\n", n);
        return;
    }

    /*  Prime numbers have exactly two factors: 1 and itself
    *
    *   Using square root to shorting loop count
    *   because if n is divisible (w/o remainders) by it's sqrt or numbers close to it, then it's not a prime,
    *   no need to go all the way to n-1.
    * 
    *   This also helps significantly reduce the run-time with really large numbers e.g 10000000019
    *   which could probably take a few days or so, using n-1.
    */
    for(long i = 2; i <= sqrt(n); i++)
    {
        temp = n % i;
        if (temp == 0)
        {
            printf("%ld is not a prime number\n", n);
            return;
        }
    }
    printf("%ld is a prime number\n", n);
    return;
}


int main()
{
    long var;
    printf("Enter the number you want to check: ");
    scanf("%ld", &var);

    checkPrime(var);
}