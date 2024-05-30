/**
 *  Uisng MACRO definitions 
*/
#include <stdio.h>
#include <string.h>

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

#define MAX_NAME_LENGTH 10

void inputName(char* name)
{
    // WITH INPUT VALIDATION
    // If name is "I WARNED YOU TO VALIDATE ME", which is 27 characters
    if (strlen(name) > MAX_NAME_LENGTH){
        return; // Return early or do something to format the name correctly
    }
    char name_to_save[MAX_NAME_LENGTH];
    memcpy(name_to_save, name, MAX_NAME_LENGTH);
    printf(name_to_save);      
}

int main(void)
{
    double DEBUG_VAL = 4.09;

    DEBUG_PRINT(DEBUG_VAL);

    int PASTE(msg, 56); // using it to form a new variable name
    msg56 = 79;

    inputName("Hello0000000000000000000000");
}
