/**
 * @file read_bit.c
 * @author Toba Adesanya (adesanyatoba@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t num = 15; // 0b1111

    // Read bit[2] only
    num &= (1 << 2);
    num = num >> 2;
    printf("Num is: %d\n", num);

    return 1;
}