/**
 * sscanf practice
 * 
 * October 2021
*/

#include <iostream>
using namespace std;

int main()
{
    char *name1 = "123Hello";
    char name2[20];
    int num, res;
    
    res = sscanf("intv12345678", "intv%d", &num);

    cout << "Result of sscanf = " << res << endl;
    printf("this is the timestamp = %d\n", num);
    // printf("this is name2 = %s\n", name2);


    return 0;
}
