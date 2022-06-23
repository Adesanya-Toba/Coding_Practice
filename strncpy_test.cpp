// C++ Program to illustrate the problem in
// strcpy() function in C/C++
 
#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    char src[] = "geeksforgeeks";
    char src2[10] = {"\0"};
     
    // The destination string size is 8
    // which is less than length of src.
    char dest[8];
     
    // copying 8 bytes of src into dest.
    // dest is not NULL terminated.
    strncpy(dest, src, 14);
     
    // using strlen function on non terminated.
    // string which can cause segfault.
    int len = strlen(dest);
     
    cout << "Copied string: " << dest << endl;
    cout << "Length of destination string: " << len << endl;
     
    return 0;
}