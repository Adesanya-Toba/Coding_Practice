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
    int num, res, num2;
    
    res = sscanf("met12345678_03", "met%d_%d", &num, &num2);

    cout << "Result of sscanf = " << res << endl;
    printf("This is the timestamp = %d\n", num);
    printf("This is the counter = %d\n", num2);
    // printf("this is name2 = %s\n", name2);
    
    // Can sscanf take variable names as the format argument? Yes, it can!
    res = sscanf("Hello1009", name1, &num);
    cout << "Result of sscanf = " << res << endl;
    printf("This is the extracted num = %d\n", num);
    printf(name1, num); // Very impressive, hmmm

    return 0;
}
