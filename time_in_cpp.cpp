#include <iostream>
#include <ctime>

int main()
{
    time_t rawtime;
    struct tm *timeinfo;

    int year = 2013, month = 5, day = 7, hour = 5, min = 1, sec = 0;

    /* get current timeinfo: */
    time(&rawtime); //or: rawtime = time(0);
    /* convert to struct: */
    // timeinfo = localtime(&rawtime);

    timeinfo = new tm;
    /* now modify the timeinfo to the given date: */
    timeinfo->tm_year = year - 1900;
    timeinfo->tm_mon = month - 1; //months since January - [0,11]
    timeinfo->tm_mday = day;      //day of the month - [1,31]
    timeinfo->tm_hour = hour;     //hours since midnight - [0,23]
    timeinfo->tm_min = min;       //minutes after the hour - [0,59]
    timeinfo->tm_sec = sec;       //seconds after the minute - [0,59]

    /* call mktime: create unix time stamp from timeinfo struct */
    int date = mktime(timeinfo);

    printf("Until the given date, since 1970/01/01 %i seconds have passed.\n", date);
}
