#include <iostream>
using namespace std;

int main()
{
    int tell = 40; 
    int* p_tell;

    p_tell = &tell;

    cout << "Address of tell is: " << &tell << endl;
    cout << "Which is the same as what p_tell holds: " << p_tell << endl;

    cout << "Therefore, &(*p_tell) is still the same address: " << &(*p_tell) << endl;

}