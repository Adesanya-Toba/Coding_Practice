/**
 * @file    int_limit_practice.cpp
 * @author  Toba Adesanya
 * @brief 
 * @version 0.1
 * @date 2022-06-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <climits>
using namespace std;

void testIntLimit(uint32_t a, uint32_t b)
{
    printf("Int a: %u\n", a);
    printf("Int b: %u\n", b);
}

int main()
{
    testIntLimit(-1, -2);
    printf("UINT32_MAX: %u\n", UINT32_MAX);

    int start_time = atoi("-1");
    cout << start_time << "\n";
    printf("start time: %u\n", start_time);
}
