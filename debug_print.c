/**
 *  Uisng MACRO definitions 
*/
#include <stdio.h>

/** 
 * Creating a debug print MACRO
 * Using the '#' before the formal parameter in 
 * the replacement text of a MACRO definition, coverts the
 * parameter into a quoted string and can be useful in
 * creating DEBUG print macros.
*/
#define DEBUG_PRINT(expr) printf(#expr " = %g\n", expr)

int main(void)
{
    char* msg = "hello";
    double DEBUG_VAL = 4.09;

    DEBUG_PRINT(DEBUG_VAL);
}