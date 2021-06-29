/**
 *  Uisng MACRO definitions 
*/
#include <stdio.h>

#if !defined(HDR) // or #ifndef, both work!
#define HDR 

#endif

/** 
 * Creating a debug print MACRO
 * Using the '#' before the formal parameter in 
 * the replacement text of a MACRO definition, coverts the
 * parameter into a quoted string and can be useful in
 * creating DEBUG print macros.
*/
#define DEBUG_PRINT(expr) printf(#expr " = %g\n", expr)

/**
 * Using '##' adjacent to parameters of a macro definition
 * causes the actual parameter names to be concatenated to 
 * form a new token.
 * 
 * So PASTE(hello, 5) -> hello5
*/
#define PASTE(front, back) (front ## back)

int main(void)
{
    double DEBUG_VAL = 4.09;

    DEBUG_PRINT(DEBUG_VAL);

    int PASTE(msg, 56); // using it to form a new variable name
    msg56 = 79;
}
