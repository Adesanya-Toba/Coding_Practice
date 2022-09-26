/**
 * @file    memset_test.cpp
 * @author  Toba Adesanya
 * @brief   Note that for other values than 0 and -1, memset will not work on int
 *          arrays since memset sets the byte values for the block of memory that
 *          starts at the variable indicated by the array for the following n bytes.
 * 
 * @version 0.1
 * @date    2022-08-10
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    /**
     * For int arrays, memset will only work for 0 or -1, this is because
     * memset works with single bytes but ints are 4 bytes.
     * 0 will work because 0 in bytes is 0x0000 0000.
     * 
     * Same with -1 = 0x1111 1111
     * 
     * But any other integer will not work because, for example
     * 1 = 0x0000 0001. Memset would fill this value into every byte in the memory
     * allocated to the array. Note, this is not the index, but the first address in the 
     * memory allocated.
     * 
     * You would notice that the 3rd argument to memset is the number of bytes, not the number of 
     * elements in the array. So it's important to watch out for that.
     */
    int array2[10];
    memset(array2, 0, sizeof array2); // WRONG
    for (int i = 0; i < sizeof array2 / sizeof(int); i++)
        cout << "array2: " << array2[i] << " ";
    cout << "\n";

    memset(array2, 1, sizeof array2); // WRONG
    for (int i = 0; i < sizeof array2 / sizeof(int); i++)
        cout << array2[i] << " ";
    cout << "\n";

    // But for char arrays, memset is pretty chill since a char is 1 byte
    char array1[10];
    memset(array1, 'k', sizeof array1);
    for (int i = 0; i < sizeof array1 / sizeof(char); i++) // You don't need to divide by sizeof char because sizeof char is 1
        cout << array1[i] << " ";
}
