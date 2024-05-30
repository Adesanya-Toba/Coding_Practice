/**
 * @file test_while_w_return.cpp
 * @author  Toba Adesanya
 * @brief 
 * @version 0.1
 * @date 2022-06-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

int main()
{
    int var = 6, iter = 0;
    while (iter < 10)
    {
        if (iter < 8)
        {
            if (iter == var)
            {
                printf("Hello, this is var: %d\n", iter);
                return 0;
            }
        }
        printf("Iter = %d\n", iter);
        iter++;
    }
    return 0;
}