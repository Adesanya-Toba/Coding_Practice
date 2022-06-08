/**
 * @file    copy_strings.cpp
 * @author  Toba Adesanya
 * @brief 
 * @version 0.1
 * @date 2022-06-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstring>

int main()
{
    const char* src = "Hello everyone!";
    char dest[20];

    strncpy(dest, src, strlen(src));
    printf("Destination string is: %s\n", dest);

    dest[0] = {0}; // Clear string
    printf("Cleared string is: %s\n", dest);

    strcpy(dest, src);
    printf("Destination string is now: %s\n", dest);


    return 0;
}