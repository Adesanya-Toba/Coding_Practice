/**
 * @file storage_checker.cpp
 * @author Toba Adesanya
 * @brief Testing storage checker interval duration
 * @version 0.1
 * @date 2022-08-02
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
using namespace std;

int main()
{
    int count = 0; 
    float initial_storage = 100;
    while (count < 140) // 5 weeks
    {
        // Remove 17.12% every 24 hours or 8.56% every 12 hours or 4.28 every 6 hours (Will 6.26 when we upgrade to 30 per day)
        initial_storage-=8.56;

        if (initial_storage < 10){
            // Clean up 10% i.e. add 10
            initial_storage+=10;
            cout << "Available storage is: " << initial_storage << "\n";
        }
        count++;
    }

}