#include <iostream>
using namespace std;

char string_to_print[50];

int main()
{
    char* hello = "Hey there %d";
    sprintf(string_to_print, hello, 78);

    cout << string_to_print << "\n";
    // printf("%s", string_to_print);
    return 0;
}