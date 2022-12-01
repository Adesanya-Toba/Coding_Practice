/**
 * @file return_const_char.cpp
 * @author Toba Adesanya (adesanyatoba@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using std::cout;

const char* returnConstChar()
{
    const char* name = "Hello you!";
    return name;
}

int main()
{
    const char* var;

    var = returnConstChar();
    cout << var << std::endl;
    
    return 0;
}