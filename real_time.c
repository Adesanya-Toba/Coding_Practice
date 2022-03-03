/**
 * Using time.h to get the local time
*/
#include <stdio.h>
#include <time.h>

int main(void)
{
    struct tm* local;
    time_t lt = time(NULL);

    local = localtime(&lt);
    printf("Local time and date: %s\n", asctime(local));
    return 0;
}