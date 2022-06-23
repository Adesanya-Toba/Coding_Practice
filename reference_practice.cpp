/**
 * @file    reference_practice.cpp
 * @author  Toba Adesanya
 * @brief 
 * @version 0.1
 * @date 2022-06-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &ref_a = a;

    ref_a++;
    cout << "Refernce to a: " << ref_a << "\n";
    cout << "A itsef: " << a << "\n";
}