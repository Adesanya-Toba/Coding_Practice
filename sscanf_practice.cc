/**
 * sscanf practice
 * 
 * October 2021
*/

#include <iostream>
using namespace std;

int main()
{
    const char *name1 = "Hello%d";
    char name2[20];
    int num, res;
    
    res = sscanf("intv12345678", "intv%d", &num);

    cout << "Result of sscanf = " << res << endl;
    printf("this is the timestamp = %d\n", num);
    // printf("this is name2 = %s\n", name2);
    
    // Can sscanf take variable names as the format argument? Yes, it can!
    sscanf("Hello1009", name1, &num);
    printf("this is the extracted num = %d\n", num);
    printf(name1, num); // Very impressive, hmmm

    return 0;
}
