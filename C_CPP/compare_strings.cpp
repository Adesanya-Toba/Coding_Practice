/**
 * @file    compare_strings.cpp
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
    char text1[] = "Hello there";
    char text2[] = "Hello there99";

    int equal = strcmp(text1, text2);
    // strncmp(text1, text2, strlen(text1));
    printf("Return of strcmp: %d\n", equal);
    if (!equal)
    {
        printf("The texts are equal.\n");
    }
    else
        printf("Texts are not equal!!\n");

    printf("Result of strncmp: %d\n", strncmp(text1, text2, strlen(text1)));
    if (!strncmp(text1, text2, strlen(text1)))
    {
        printf("The texts are equal.\n");
    }
    else
        printf("Texts are not equal!\n");
    

    return 0;
}