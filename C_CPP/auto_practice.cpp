/**
 * @file auto_practice.cpp
 * @author Toba Adesanya (toba@shyftpower.com)
 * @brief   Trying out the 'auto' keyword and for-each (range-based) for loops.
 * @version 0.1
 * @date 2022-09-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <vector>

using std::cout;

int main()
{
    std::vector<int> my_vector = {1, 3, 6, 7, 8, 9};
    int array[] = {1,3,2,4,5,7};

    for (const auto& loop_vec: array)
    {
        cout << loop_vec << "\n";
    }

    int a = 103;
    std::vector <int> v1(array, array+5);
    cout << v1.size() << std::endl;
    cout << a/1 << std::endl;
    cout << a%1 << std::endl;
    return 0;

    
}
