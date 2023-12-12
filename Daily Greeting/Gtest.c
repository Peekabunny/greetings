#include <stdio.h>
#include <time.h>
int main(int argc, char* argv[])
{
    if (argc < 2)
        put("Hello you sexy beast!");
    else
        printf("Hello, %s", argv[1]);



    time_t now;
    // time_t represents the clock time as an integer which is part of the calendar time
    time(&now);
    // time() acts as a pointer; returns the calendar-time equivalent using data-type time_t
    printf("The computer thinks it's %i\n");
    printf("%s", ctime(&now));
    // ctime function returns a string representing the local time base on the argument time


}